#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 308281845U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)84;
unsigned int var_10 = 3213752266U;
long long int var_11 = -5610760351835121606LL;
unsigned long long int var_14 = 8662046713659319934ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)53681;
unsigned short var_17 = (unsigned short)21759;
_Bool var_18 = (_Bool)0;
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
