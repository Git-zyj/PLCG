#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5072721392768604201LL;
short var_1 = (short)-22520;
int var_4 = 1769359909;
unsigned int var_10 = 2289616777U;
long long int var_11 = 3769889005044290795LL;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
long long int var_14 = 7067956260247186871LL;
int var_15 = -494850075;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5257657760322483588ULL;
long long int var_18 = -7762256612789919799LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
