#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -399685535;
unsigned short var_1 = (unsigned short)6827;
signed char var_2 = (signed char)73;
signed char var_3 = (signed char)-120;
unsigned char var_5 = (unsigned char)170;
unsigned int var_6 = 3289977611U;
int zero = 0;
unsigned char var_10 = (unsigned char)78;
int var_11 = 879039155;
unsigned long long int var_12 = 5957453851284138864ULL;
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
