#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54464;
long long int var_4 = 1517279066167505977LL;
short var_6 = (short)8639;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 6009544708768476777ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)192;
unsigned short var_15 = (unsigned short)46602;
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
