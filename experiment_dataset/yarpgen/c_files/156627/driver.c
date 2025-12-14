#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 74444901;
unsigned int var_2 = 1538885084U;
short var_3 = (short)-11743;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
unsigned int var_20 = 3545291922U;
unsigned short var_21 = (unsigned short)13575;
int var_22 = -1369437504;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
