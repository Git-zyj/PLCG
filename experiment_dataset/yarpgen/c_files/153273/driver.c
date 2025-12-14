#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1240655933U;
unsigned int var_13 = 2913769370U;
long long int var_14 = 7000459931026642483LL;
int zero = 0;
int var_16 = -1547231716;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3165962554U;
void init() {
}

void checksum() {
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
