#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24589;
unsigned long long int var_3 = 14588467676121052520ULL;
signed char var_4 = (signed char)-112;
signed char var_5 = (signed char)-1;
int var_8 = -562826362;
unsigned int var_9 = 2380534025U;
int zero = 0;
unsigned long long int var_10 = 8677526754285169974ULL;
unsigned char var_11 = (unsigned char)212;
short var_12 = (short)-9974;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
