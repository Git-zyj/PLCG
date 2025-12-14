#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned char var_2 = (unsigned char)207;
signed char var_3 = (signed char)63;
unsigned char var_7 = (unsigned char)253;
unsigned char var_11 = (unsigned char)80;
unsigned long long int var_12 = 15976092406528558127ULL;
short var_13 = (short)-25928;
short var_16 = (short)7178;
unsigned char var_17 = (unsigned char)123;
int zero = 0;
signed char var_18 = (signed char)103;
unsigned char var_19 = (unsigned char)252;
unsigned char var_20 = (unsigned char)225;
signed char var_21 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
