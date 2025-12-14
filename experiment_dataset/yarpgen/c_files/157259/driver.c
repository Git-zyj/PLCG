#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7398;
long long int var_5 = 1719401732813771466LL;
int var_8 = -1497417192;
long long int var_9 = -8242924750577298680LL;
int zero = 0;
int var_10 = -1524421485;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)6653;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
