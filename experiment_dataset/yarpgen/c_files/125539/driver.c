#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)37779;
unsigned short var_7 = (unsigned short)2609;
int var_14 = -1930903566;
long long int var_15 = 426378086409564180LL;
int zero = 0;
int var_16 = -674394988;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
