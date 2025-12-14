#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4269365715972667792LL;
signed char var_2 = (signed char)36;
unsigned char var_3 = (unsigned char)208;
long long int var_4 = 4680867413652535382LL;
signed char var_5 = (signed char)76;
short var_6 = (short)3111;
unsigned char var_7 = (unsigned char)23;
signed char var_12 = (signed char)42;
int zero = 0;
signed char var_14 = (signed char)67;
_Bool var_15 = (_Bool)1;
long long int var_16 = 9126331243879103134LL;
signed char var_17 = (signed char)101;
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
