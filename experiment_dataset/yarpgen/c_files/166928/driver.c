#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2587267572925116474LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)131;
unsigned long long int var_5 = 17946296298719768210ULL;
_Bool var_6 = (_Bool)0;
int var_8 = -1990354501;
int zero = 0;
unsigned short var_11 = (unsigned short)51777;
long long int var_12 = 4050633073356552151LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
