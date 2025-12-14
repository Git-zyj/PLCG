#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2091257724701182208LL;
unsigned long long int var_5 = 15584851772275276293ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -6102914644184245777LL;
unsigned char var_10 = (unsigned char)123;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1743321887U;
int zero = 0;
unsigned char var_13 = (unsigned char)183;
signed char var_14 = (signed char)125;
int var_15 = -16517937;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-31881;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
