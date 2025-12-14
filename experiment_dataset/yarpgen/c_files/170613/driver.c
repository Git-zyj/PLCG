#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)143;
short var_10 = (short)-22028;
unsigned int var_11 = 172361739U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -119928790836038176LL;
unsigned char var_20 = (unsigned char)88;
void init() {
}

void checksum() {
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
