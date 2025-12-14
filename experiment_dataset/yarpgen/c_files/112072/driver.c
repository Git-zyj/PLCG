#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3954421601536003827ULL;
short var_6 = (short)-21520;
unsigned short var_7 = (unsigned short)29096;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)10677;
int zero = 0;
signed char var_10 = (signed char)39;
signed char var_11 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
