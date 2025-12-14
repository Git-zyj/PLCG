#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1062562216U;
_Bool var_3 = (_Bool)0;
long long int var_6 = 1151169556564991246LL;
signed char var_9 = (signed char)93;
unsigned char var_10 = (unsigned char)5;
short var_13 = (short)-28896;
int zero = 0;
short var_15 = (short)29460;
unsigned char var_16 = (unsigned char)137;
short var_17 = (short)3773;
void init() {
}

void checksum() {
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
