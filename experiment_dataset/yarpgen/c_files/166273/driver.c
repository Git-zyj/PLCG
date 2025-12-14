#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1106973812U;
short var_1 = (short)21434;
unsigned int var_3 = 3362371701U;
long long int var_6 = -5567521217701179326LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)19;
unsigned int var_16 = 483985311U;
unsigned short var_17 = (unsigned short)47719;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
