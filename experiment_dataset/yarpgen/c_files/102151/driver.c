#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 312167220665308219LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)246;
unsigned short var_9 = (unsigned short)28669;
int zero = 0;
int var_10 = -1237385446;
short var_11 = (short)-28270;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
