#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -283724774;
unsigned short var_2 = (unsigned short)39207;
signed char var_3 = (signed char)24;
signed char var_5 = (signed char)10;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)67;
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
