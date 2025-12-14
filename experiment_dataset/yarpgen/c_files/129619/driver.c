#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)31313;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)28;
int zero = 0;
long long int var_16 = 4748721389511448509LL;
unsigned int var_17 = 3016011518U;
void init() {
}

void checksum() {
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
