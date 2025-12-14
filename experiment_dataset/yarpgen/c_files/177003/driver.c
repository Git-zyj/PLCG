#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 383356667;
short var_6 = (short)16655;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 8450026930012368236ULL;
int zero = 0;
long long int var_16 = 4122279921342507616LL;
unsigned short var_17 = (unsigned short)50241;
long long int var_18 = -6104599732756106653LL;
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
