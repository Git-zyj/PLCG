#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2131327561;
int var_3 = -1406062188;
int var_5 = 1150284136;
unsigned short var_6 = (unsigned short)59692;
int var_7 = 423628990;
int var_9 = 1497648782;
unsigned short var_11 = (unsigned short)55535;
int var_12 = 1089125811;
int var_13 = -165138088;
unsigned short var_14 = (unsigned short)13471;
int var_16 = -402519147;
int zero = 0;
int var_20 = -1459929836;
unsigned short var_21 = (unsigned short)34133;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
