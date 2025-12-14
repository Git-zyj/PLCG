#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -1966763529;
unsigned char var_4 = (unsigned char)239;
int var_5 = 1252393272;
int var_10 = 1028187166;
int var_11 = 1247860166;
unsigned char var_12 = (unsigned char)4;
int zero = 0;
int var_13 = -2097284259;
signed char var_14 = (signed char)-17;
unsigned long long int var_15 = 14342222550176270702ULL;
unsigned long long int var_16 = 1376162266810242863ULL;
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
