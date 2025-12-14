#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -187211343;
unsigned long long int var_4 = 13663924286113314686ULL;
unsigned short var_7 = (unsigned short)21188;
short var_11 = (short)-2952;
int zero = 0;
signed char var_13 = (signed char)22;
signed char var_14 = (signed char)-79;
unsigned long long int var_15 = 15754287157315275050ULL;
signed char var_16 = (signed char)-64;
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
