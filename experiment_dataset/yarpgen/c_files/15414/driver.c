#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3252036246U;
unsigned char var_4 = (unsigned char)44;
unsigned int var_5 = 3879732320U;
unsigned char var_6 = (unsigned char)235;
unsigned long long int var_9 = 18094280625306776878ULL;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)33;
int zero = 0;
signed char var_14 = (signed char)3;
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
