#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
int var_3 = -1426766748;
int var_6 = 65542086;
signed char var_7 = (signed char)24;
unsigned char var_8 = (unsigned char)181;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2753374598U;
int zero = 0;
signed char var_12 = (signed char)-40;
signed char var_13 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
