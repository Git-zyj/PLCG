#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)83;
short var_5 = (short)19908;
unsigned short var_6 = (unsigned short)3719;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)41791;
short var_12 = (short)-19795;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
