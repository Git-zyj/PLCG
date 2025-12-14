#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50384;
unsigned char var_5 = (unsigned char)3;
unsigned short var_6 = (unsigned short)51935;
_Bool var_7 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 4382927024983730514LL;
unsigned short var_17 = (unsigned short)62003;
unsigned char var_18 = (unsigned char)165;
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
