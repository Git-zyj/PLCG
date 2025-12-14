#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
unsigned int var_5 = 1413520852U;
_Bool var_10 = (_Bool)0;
signed char var_17 = (signed char)101;
int zero = 0;
unsigned short var_18 = (unsigned short)45263;
unsigned char var_19 = (unsigned char)52;
unsigned short var_20 = (unsigned short)2522;
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
