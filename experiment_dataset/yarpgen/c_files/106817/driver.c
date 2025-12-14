#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3096172770087024957LL;
unsigned int var_1 = 350495803U;
unsigned int var_4 = 4242605822U;
unsigned short var_5 = (unsigned short)756;
signed char var_6 = (signed char)71;
unsigned short var_11 = (unsigned short)29383;
long long int var_12 = 3097006517892770025LL;
int zero = 0;
long long int var_17 = 5150687796259276014LL;
unsigned int var_18 = 4100081055U;
unsigned short var_19 = (unsigned short)29914;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
