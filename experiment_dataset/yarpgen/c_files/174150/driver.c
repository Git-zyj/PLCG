#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3268532159205499123LL;
signed char var_1 = (signed char)-78;
long long int var_4 = -3289191401876323048LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-22;
unsigned short var_12 = (unsigned short)24286;
short var_14 = (short)27591;
int zero = 0;
long long int var_15 = -1594563988889321722LL;
short var_16 = (short)6943;
long long int var_17 = 1609100748138040738LL;
void init() {
}

void checksum() {
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
