#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1567561346U;
long long int var_6 = -7368881970893492631LL;
unsigned long long int var_7 = 14604016079058088822ULL;
unsigned char var_10 = (unsigned char)237;
unsigned long long int var_14 = 14820339609414504799ULL;
long long int var_15 = -9181569352383225489LL;
unsigned short var_17 = (unsigned short)25470;
int zero = 0;
signed char var_19 = (signed char)73;
signed char var_20 = (signed char)80;
short var_21 = (short)-9058;
unsigned short var_22 = (unsigned short)8049;
short var_23 = (short)-12041;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
