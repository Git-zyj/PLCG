#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 18014102274901611106ULL;
long long int var_10 = -2552133834437982235LL;
long long int var_14 = 2193008161668493070LL;
int zero = 0;
long long int var_16 = 4241846819465585653LL;
long long int var_17 = -2256171836277405233LL;
unsigned long long int var_18 = 1489159542482888894ULL;
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
