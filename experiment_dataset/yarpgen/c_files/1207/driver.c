#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1400685081U;
long long int var_1 = -2036083268659087604LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)180;
int var_7 = 10290678;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-18;
signed char var_14 = (signed char)-28;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
