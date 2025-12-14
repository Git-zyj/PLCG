#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1840;
_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)29048;
int var_11 = -1751993079;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3769095965U;
unsigned char var_18 = (unsigned char)245;
_Bool var_19 = (_Bool)1;
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
