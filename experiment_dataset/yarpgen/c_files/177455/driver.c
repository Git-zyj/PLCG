#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7927;
unsigned long long int var_6 = 8772673867146679905ULL;
unsigned short var_8 = (unsigned short)17124;
int var_9 = -841777500;
int var_16 = 349671261;
unsigned long long int var_17 = 6638445537772729680ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)54165;
unsigned char var_19 = (unsigned char)73;
unsigned long long int var_20 = 15768264743318125070ULL;
short var_21 = (short)-28933;
unsigned char var_22 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
