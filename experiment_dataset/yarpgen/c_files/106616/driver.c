#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23705;
signed char var_7 = (signed char)-66;
signed char var_9 = (signed char)-21;
unsigned int var_11 = 3181601453U;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
unsigned long long int var_13 = 9786728628142336739ULL;
signed char var_14 = (signed char)81;
short var_15 = (short)-3781;
long long int var_16 = -5850969436716008673LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
