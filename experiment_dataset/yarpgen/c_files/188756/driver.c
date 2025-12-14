#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17414;
_Bool var_5 = (_Bool)0;
int var_7 = 632962725;
signed char var_10 = (signed char)34;
long long int var_13 = -2980828885367518887LL;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
long long int var_15 = 3989725068601466081LL;
unsigned int var_16 = 3969747819U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
