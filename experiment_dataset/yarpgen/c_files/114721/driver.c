#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2903142165U;
unsigned short var_3 = (unsigned short)20595;
int var_7 = -414444739;
int var_11 = -224995564;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3485905225U;
int zero = 0;
long long int var_18 = -5289892193979869471LL;
unsigned int var_19 = 1252939720U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
