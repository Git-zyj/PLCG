#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
short var_4 = (short)32396;
signed char var_5 = (signed char)89;
unsigned long long int var_6 = 9274823133873477476ULL;
short var_11 = (short)10720;
unsigned short var_12 = (unsigned short)64264;
short var_14 = (short)-23412;
int zero = 0;
unsigned int var_15 = 1676027778U;
unsigned int var_16 = 1216477421U;
signed char var_17 = (signed char)1;
signed char var_18 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
