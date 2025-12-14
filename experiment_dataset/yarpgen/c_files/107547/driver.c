#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)29480;
unsigned short var_8 = (unsigned short)15998;
unsigned short var_9 = (unsigned short)63733;
int zero = 0;
unsigned short var_10 = (unsigned short)1629;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)58267;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
