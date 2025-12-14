#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6279620262686391253LL;
signed char var_4 = (signed char)32;
signed char var_8 = (signed char)(-127 - 1);
unsigned short var_9 = (unsigned short)9391;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-23804;
void init() {
}

void checksum() {
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
