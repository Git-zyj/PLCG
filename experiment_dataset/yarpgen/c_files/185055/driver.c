#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13952;
unsigned long long int var_1 = 11848015002014382596ULL;
short var_2 = (short)1663;
unsigned char var_4 = (unsigned char)156;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)16227;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16890;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
