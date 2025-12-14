#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3565952238U;
_Bool var_4 = (_Bool)0;
int var_10 = 796083468;
int zero = 0;
unsigned short var_12 = (unsigned short)50764;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43113;
unsigned long long int var_15 = 11033188873514202786ULL;
unsigned short var_16 = (unsigned short)51757;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
