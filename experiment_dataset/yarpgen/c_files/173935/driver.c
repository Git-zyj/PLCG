#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3534523310U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8499333842880695949ULL;
int zero = 0;
long long int var_19 = -8993700763255354749LL;
unsigned char var_20 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
