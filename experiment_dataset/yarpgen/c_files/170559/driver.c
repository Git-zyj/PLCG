#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4332;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)48;
unsigned char var_13 = (unsigned char)238;
int zero = 0;
long long int var_15 = 4670911950020441552LL;
unsigned int var_16 = 2676714657U;
int var_17 = 46390492;
unsigned int var_18 = 3299066035U;
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
