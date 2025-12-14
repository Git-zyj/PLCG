#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5628536892793418731LL;
long long int var_3 = 874547287986707127LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 3271552463773224963ULL;
long long int var_8 = 2469273995903997226LL;
unsigned char var_10 = (unsigned char)71;
unsigned long long int var_13 = 11611859160277028791ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12477637441598928098ULL;
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
