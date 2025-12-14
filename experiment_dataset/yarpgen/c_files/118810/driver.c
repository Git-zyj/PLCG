#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)49328;
signed char var_9 = (signed char)92;
short var_12 = (short)-24567;
int zero = 0;
signed char var_19 = (signed char)76;
unsigned char var_20 = (unsigned char)129;
int var_21 = -1674741161;
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
