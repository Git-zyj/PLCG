#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
int var_3 = 145814252;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_14 = 383708163;
short var_15 = (short)10819;
long long int var_16 = 594689083733990917LL;
unsigned int var_17 = 1265618067U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
