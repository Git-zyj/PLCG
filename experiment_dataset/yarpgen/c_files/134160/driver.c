#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
signed char var_4 = (signed char)66;
unsigned char var_5 = (unsigned char)239;
unsigned char var_6 = (unsigned char)164;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 129480685;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
