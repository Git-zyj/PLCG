#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)62;
unsigned char var_4 = (unsigned char)73;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7270178137508327815LL;
int zero = 0;
unsigned short var_14 = (unsigned short)60040;
unsigned short var_15 = (unsigned short)8209;
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
