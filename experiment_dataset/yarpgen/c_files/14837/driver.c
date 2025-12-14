#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2835644032911735753ULL;
_Bool var_3 = (_Bool)1;
short var_11 = (short)-26048;
int zero = 0;
int var_12 = 2025206156;
unsigned short var_13 = (unsigned short)63756;
long long int var_14 = -7298485577946534450LL;
short var_15 = (short)13814;
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
