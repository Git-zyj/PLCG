#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3066031802U;
short var_5 = (short)6895;
unsigned short var_13 = (unsigned short)45306;
long long int var_15 = -9075014297834157818LL;
int var_16 = -1651624942;
int zero = 0;
unsigned int var_20 = 136054374U;
unsigned char var_21 = (unsigned char)254;
unsigned int var_22 = 2564598743U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
