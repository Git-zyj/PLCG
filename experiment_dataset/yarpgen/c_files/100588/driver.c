#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned int var_1 = 576367683U;
long long int var_3 = 750183791468513471LL;
unsigned int var_4 = 811312840U;
unsigned char var_6 = (unsigned char)44;
unsigned short var_7 = (unsigned short)7413;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
unsigned char var_13 = (unsigned char)23;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1607269087U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
