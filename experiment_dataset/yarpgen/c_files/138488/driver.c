#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_10 = -5831737234872798991LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
signed char var_19 = (signed char)101;
unsigned int var_20 = 1730623542U;
unsigned short var_21 = (unsigned short)52696;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
