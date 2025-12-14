#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 449772545;
_Bool var_6 = (_Bool)1;
int var_10 = -1626788076;
int zero = 0;
long long int var_11 = -1517379545941871795LL;
long long int var_12 = 3272109218541715590LL;
unsigned int var_13 = 946570865U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
