#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 394744314U;
unsigned short var_6 = (unsigned short)63537;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 882289122U;
unsigned int var_18 = 1280185622U;
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
