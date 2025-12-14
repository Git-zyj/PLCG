#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3663406649083670769LL;
unsigned char var_10 = (unsigned char)135;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)10883;
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
