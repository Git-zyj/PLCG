#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11647176128358850698ULL;
unsigned long long int var_3 = 11262059424950671065ULL;
unsigned int var_7 = 3369539937U;
short var_9 = (short)-16600;
unsigned long long int var_12 = 6236559632007931416ULL;
int var_13 = -37394785;
signed char var_15 = (signed char)-69;
unsigned int var_17 = 2896365096U;
short var_18 = (short)-28704;
int zero = 0;
unsigned int var_19 = 1255629046U;
short var_20 = (short)-16971;
unsigned char var_21 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
