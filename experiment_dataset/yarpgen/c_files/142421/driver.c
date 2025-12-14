#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)117;
long long int var_13 = 104812427778526820LL;
unsigned int var_14 = 2948531539U;
unsigned long long int var_15 = 16489461165340416795ULL;
int zero = 0;
int var_17 = -1987547358;
unsigned int var_18 = 2559898477U;
long long int var_19 = 758489013868953220LL;
unsigned int var_20 = 1721598230U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
