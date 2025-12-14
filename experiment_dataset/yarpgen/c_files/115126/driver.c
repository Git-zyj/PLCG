#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned short var_1 = (unsigned short)46642;
unsigned short var_2 = (unsigned short)54072;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_11 = 2728648381264503867LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7657893126497453037LL;
int var_17 = -1483780292;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
