#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15687;
unsigned int var_4 = 3278173952U;
long long int var_5 = -1255230863704659586LL;
long long int var_10 = -1322064686527836792LL;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
unsigned char var_12 = (unsigned char)248;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)179;
unsigned char var_15 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
