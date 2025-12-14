#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1746618654604595502LL;
unsigned int var_9 = 2373161487U;
unsigned long long int var_11 = 6907596781573739323ULL;
int zero = 0;
long long int var_14 = 6132482682816471737LL;
unsigned long long int var_15 = 3442482574959731109ULL;
int var_16 = -163014849;
long long int var_17 = -5857431028754060907LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
