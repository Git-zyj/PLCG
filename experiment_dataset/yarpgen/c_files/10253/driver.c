#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2950914162U;
unsigned short var_5 = (unsigned short)15989;
unsigned int var_8 = 978359618U;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -461635938163678203LL;
unsigned int var_12 = 2247626173U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
