#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 672025962;
unsigned short var_5 = (unsigned short)15745;
signed char var_6 = (signed char)-10;
unsigned short var_7 = (unsigned short)2212;
signed char var_10 = (signed char)-59;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-23;
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
