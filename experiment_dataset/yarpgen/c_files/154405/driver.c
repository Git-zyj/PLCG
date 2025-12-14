#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 6384166723181169461LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -169351435598335304LL;
long long int var_7 = 8746130086290000495LL;
long long int var_8 = -7164566466420512706LL;
unsigned int var_9 = 449943668U;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1510532655;
int var_13 = 1258440956;
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
