#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7881180325313829557LL;
long long int var_4 = 2092128242771607384LL;
_Bool var_9 = (_Bool)0;
int var_10 = -1972509511;
long long int var_14 = -3924282450716747739LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1586704600;
void init() {
}

void checksum() {
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
