#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -64413853;
short var_1 = (short)21666;
unsigned short var_2 = (unsigned short)44272;
long long int var_7 = 3283298358719256288LL;
int var_11 = 2026918127;
int zero = 0;
unsigned long long int var_13 = 9110592597971881152ULL;
unsigned char var_14 = (unsigned char)105;
unsigned char var_15 = (unsigned char)18;
unsigned short var_16 = (unsigned short)14781;
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
