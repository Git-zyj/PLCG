#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5183750699807797280LL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-15961;
unsigned char var_6 = (unsigned char)23;
short var_12 = (short)-26831;
unsigned long long int var_14 = 3734589618282563160ULL;
int zero = 0;
unsigned int var_15 = 2322485801U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
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
