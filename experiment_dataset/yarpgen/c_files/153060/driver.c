#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)58;
_Bool var_8 = (_Bool)1;
long long int var_10 = -2107776852810589260LL;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)181;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)44;
long long int var_22 = 4036076659004253565LL;
int var_23 = 2044776291;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
