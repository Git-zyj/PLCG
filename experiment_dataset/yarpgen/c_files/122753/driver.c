#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5009;
signed char var_2 = (signed char)24;
unsigned short var_3 = (unsigned short)63568;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-85;
int zero = 0;
unsigned short var_15 = (unsigned short)30268;
unsigned short var_16 = (unsigned short)62650;
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
