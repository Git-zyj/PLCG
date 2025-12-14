#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = -2065684185;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 8196262455093296927ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)7209;
long long int var_21 = 1999474697726054907LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
