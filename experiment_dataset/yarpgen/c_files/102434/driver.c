#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8153399684538034758LL;
int var_3 = -949199802;
unsigned char var_5 = (unsigned char)254;
unsigned int var_7 = 4024094295U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)72;
long long int var_12 = -8260855900730885462LL;
signed char var_13 = (signed char)13;
int zero = 0;
unsigned char var_17 = (unsigned char)40;
int var_18 = 1895925455;
unsigned int var_19 = 3434311000U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
