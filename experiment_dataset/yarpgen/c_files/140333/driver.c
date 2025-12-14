#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)87;
unsigned int var_4 = 367076947U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 9620474272670538645ULL;
long long int var_10 = 9001491614067417598LL;
signed char var_11 = (signed char)45;
unsigned char var_13 = (unsigned char)219;
int zero = 0;
unsigned int var_16 = 3853189593U;
signed char var_17 = (signed char)115;
void init() {
}

void checksum() {
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
