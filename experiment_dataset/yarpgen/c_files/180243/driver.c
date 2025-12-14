#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19033;
unsigned int var_3 = 3910400147U;
unsigned int var_4 = 1237605121U;
long long int var_7 = -679363667548591875LL;
unsigned short var_8 = (unsigned short)30525;
short var_11 = (short)-9760;
signed char var_12 = (signed char)-121;
int var_14 = -66900870;
unsigned short var_15 = (unsigned short)20947;
int zero = 0;
signed char var_16 = (signed char)19;
signed char var_17 = (signed char)24;
signed char var_18 = (signed char)19;
unsigned short var_19 = (unsigned short)8116;
signed char var_20 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
