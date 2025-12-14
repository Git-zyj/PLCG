#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 350997120U;
short var_5 = (short)-16721;
_Bool var_8 = (_Bool)1;
int var_10 = -126051454;
short var_11 = (short)7688;
int zero = 0;
long long int var_13 = 5762044616524993250LL;
unsigned char var_14 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
