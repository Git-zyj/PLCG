#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1944593623U;
int zero = 0;
unsigned int var_11 = 930930540U;
unsigned char var_12 = (unsigned char)49;
short var_13 = (short)-23458;
signed char var_14 = (signed char)59;
unsigned char var_15 = (unsigned char)46;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)16;
long long int var_18 = 9138475951364087040LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
