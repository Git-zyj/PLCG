#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)38581;
unsigned char var_7 = (unsigned char)59;
unsigned int var_9 = 330591151U;
unsigned short var_10 = (unsigned short)48644;
int zero = 0;
short var_14 = (short)8857;
signed char var_15 = (signed char)45;
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
