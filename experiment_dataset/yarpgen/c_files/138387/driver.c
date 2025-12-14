#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -85741446;
unsigned int var_4 = 1185600547U;
int var_5 = -1519946344;
unsigned char var_7 = (unsigned char)150;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 7125309854648297714ULL;
int zero = 0;
int var_12 = -249463977;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
