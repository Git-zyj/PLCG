#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29128;
unsigned int var_3 = 110279976U;
signed char var_9 = (signed char)96;
unsigned short var_12 = (unsigned short)32574;
unsigned short var_14 = (unsigned short)52977;
unsigned long long int var_17 = 5569336184666720749ULL;
int zero = 0;
short var_18 = (short)24303;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
