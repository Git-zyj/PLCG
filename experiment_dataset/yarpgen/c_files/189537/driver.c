#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)10821;
long long int var_18 = 347945099371947629LL;
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
