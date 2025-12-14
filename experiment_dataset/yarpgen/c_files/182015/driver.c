#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21423;
unsigned short var_3 = (unsigned short)54285;
short var_4 = (short)7688;
signed char var_6 = (signed char)-109;
int zero = 0;
signed char var_15 = (signed char)123;
unsigned long long int var_16 = 374796829028271221ULL;
short var_17 = (short)-19685;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
