#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1463773470;
int var_1 = -1701535488;
unsigned short var_2 = (unsigned short)16092;
short var_3 = (short)30160;
short var_8 = (short)-13489;
short var_9 = (short)11417;
unsigned short var_10 = (unsigned short)23586;
int zero = 0;
signed char var_11 = (signed char)9;
unsigned short var_12 = (unsigned short)30970;
short var_13 = (short)21606;
long long int var_14 = 3278418599535139852LL;
int var_15 = 440094760;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
