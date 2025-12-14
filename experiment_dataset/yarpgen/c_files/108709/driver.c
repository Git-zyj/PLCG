#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2024673369;
int var_5 = 1287527695;
long long int var_6 = -4449166469394229485LL;
unsigned int var_16 = 2493367609U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1701542226U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3287300335U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
