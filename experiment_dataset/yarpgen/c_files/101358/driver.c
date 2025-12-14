#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -5618449255249855339LL;
signed char var_4 = (signed char)42;
signed char var_5 = (signed char)91;
int var_6 = -1277128610;
_Bool var_7 = (_Bool)0;
signed char var_13 = (signed char)10;
int zero = 0;
unsigned char var_14 = (unsigned char)114;
_Bool var_15 = (_Bool)1;
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
