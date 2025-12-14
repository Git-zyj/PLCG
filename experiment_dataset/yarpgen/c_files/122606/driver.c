#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-34;
unsigned int var_7 = 2859601483U;
signed char var_11 = (signed char)-63;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-72;
unsigned char var_15 = (unsigned char)22;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)102;
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
