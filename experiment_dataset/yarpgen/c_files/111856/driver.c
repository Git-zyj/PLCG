#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1135901548U;
int var_5 = 600145327;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 4870900299825822854ULL;
long long int var_18 = 3493530956025507674LL;
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
