#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
short var_3 = (short)-3505;
long long int var_8 = -3386461647884259379LL;
short var_10 = (short)-317;
int zero = 0;
long long int var_20 = -4758013864809174207LL;
short var_21 = (short)23713;
short var_22 = (short)-11772;
unsigned long long int var_23 = 14787164644120065839ULL;
unsigned int var_24 = 141200334U;
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
