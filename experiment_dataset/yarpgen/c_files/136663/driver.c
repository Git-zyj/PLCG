#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 8828723683143803441LL;
int zero = 0;
unsigned int var_13 = 4273688445U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4352667426272390245LL;
unsigned char var_16 = (unsigned char)31;
unsigned long long int var_17 = 959964016119049606ULL;
short var_18 = (short)7287;
long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 899856112118359594LL : 5869094248579678195LL;
}

void checksum() {
    hash(&seed, var_13);
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
