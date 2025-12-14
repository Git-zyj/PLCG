#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2353293066U;
int var_1 = 961834263;
unsigned int var_4 = 1783816129U;
unsigned short var_5 = (unsigned short)53509;
short var_10 = (short)24054;
long long int var_11 = 6992670990825025391LL;
int zero = 0;
int var_13 = -748979752;
unsigned int var_14 = 3091090115U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
