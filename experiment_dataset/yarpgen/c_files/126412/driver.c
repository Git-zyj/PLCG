#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6721097373238028565LL;
signed char var_4 = (signed char)2;
unsigned char var_5 = (unsigned char)218;
int var_8 = 1745232417;
unsigned int var_10 = 2893347740U;
signed char var_13 = (signed char)28;
int zero = 0;
unsigned int var_16 = 1163694266U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4072;
void init() {
}

void checksum() {
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
