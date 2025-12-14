#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10493;
unsigned int var_1 = 1433963067U;
short var_2 = (short)-14566;
int var_8 = 558964073;
short var_10 = (short)18129;
unsigned short var_11 = (unsigned short)64598;
int zero = 0;
int var_12 = -347991597;
unsigned int var_13 = 574157414U;
unsigned long long int var_14 = 15565664533153517804ULL;
unsigned int var_15 = 1878778373U;
unsigned short var_16 = (unsigned short)41145;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
