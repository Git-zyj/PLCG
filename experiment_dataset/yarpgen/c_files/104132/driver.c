#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2366307056614494562LL;
unsigned int var_3 = 3818748390U;
unsigned char var_12 = (unsigned char)166;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-28735;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)5;
int var_22 = 1459938174;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
