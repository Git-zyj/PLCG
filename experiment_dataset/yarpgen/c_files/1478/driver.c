#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2865411848127955368ULL;
unsigned int var_4 = 1303083334U;
_Bool var_10 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2265460909U;
long long int var_19 = 1249511700786014492LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
