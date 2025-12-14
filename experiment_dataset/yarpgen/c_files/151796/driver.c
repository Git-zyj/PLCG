#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-64;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-94;
unsigned long long int var_11 = 10199476013225585594ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)36;
unsigned short var_18 = (unsigned short)59057;
void init() {
}

void checksum() {
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
