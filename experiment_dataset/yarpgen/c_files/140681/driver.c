#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1946458359U;
unsigned int var_3 = 4128897129U;
short var_7 = (short)30267;
unsigned short var_8 = (unsigned short)24800;
unsigned short var_11 = (unsigned short)10645;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 13856182333939867552ULL;
short var_18 = (short)24509;
unsigned char var_19 = (unsigned char)158;
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
