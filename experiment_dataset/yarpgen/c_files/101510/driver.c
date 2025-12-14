#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52208;
unsigned long long int var_4 = 3279301868543142663ULL;
short var_5 = (short)-18212;
short var_6 = (short)29587;
unsigned short var_7 = (unsigned short)16849;
int var_9 = 2091321849;
short var_10 = (short)-21085;
unsigned long long int var_11 = 12856822349453243218ULL;
unsigned long long int var_12 = 5051329418023077566ULL;
unsigned int var_13 = 2815742327U;
signed char var_14 = (signed char)-2;
unsigned char var_16 = (unsigned char)150;
unsigned int var_17 = 4087517186U;
short var_18 = (short)-4747;
int zero = 0;
unsigned int var_20 = 1074620106U;
unsigned char var_21 = (unsigned char)169;
unsigned short var_22 = (unsigned short)11898;
long long int var_23 = 909620460668684092LL;
signed char var_24 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
