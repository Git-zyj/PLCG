#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2544339162U;
unsigned char var_4 = (unsigned char)40;
int var_6 = -729494465;
signed char var_8 = (signed char)62;
long long int var_9 = -581753037938489900LL;
int zero = 0;
unsigned int var_15 = 1047914667U;
_Bool var_16 = (_Bool)1;
int var_17 = -901189709;
unsigned short var_18 = (unsigned short)2528;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
