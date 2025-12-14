#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3938696574794013843LL;
unsigned short var_6 = (unsigned short)17213;
_Bool var_8 = (_Bool)0;
long long int var_10 = -1129996727937006797LL;
unsigned short var_11 = (unsigned short)28896;
long long int var_12 = -4033526729662605667LL;
int zero = 0;
int var_14 = 866873604;
unsigned char var_15 = (unsigned char)67;
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
