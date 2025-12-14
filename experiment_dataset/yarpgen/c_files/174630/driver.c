#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned char var_1 = (unsigned char)46;
_Bool var_6 = (_Bool)0;
short var_10 = (short)-3432;
unsigned char var_13 = (unsigned char)49;
int zero = 0;
long long int var_14 = 924674038641760445LL;
unsigned long long int var_15 = 437890925268680631ULL;
short var_16 = (short)10938;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
