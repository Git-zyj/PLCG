#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)70;
short var_3 = (short)14144;
unsigned int var_6 = 2866092260U;
short var_9 = (short)5674;
signed char var_13 = (signed char)-14;
int zero = 0;
unsigned int var_15 = 2686140195U;
unsigned char var_16 = (unsigned char)237;
short var_17 = (short)-18201;
_Bool var_18 = (_Bool)1;
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
