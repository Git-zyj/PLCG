#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
short var_1 = (short)6076;
unsigned long long int var_2 = 5811103715085380788ULL;
short var_4 = (short)11106;
unsigned short var_6 = (unsigned short)56836;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
unsigned long long int var_16 = 8882308371324516650ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
