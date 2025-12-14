#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-14937;
short var_11 = (short)6232;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3636731148U;
int zero = 0;
signed char var_19 = (signed char)108;
long long int var_20 = 3016656999508156262LL;
void init() {
}

void checksum() {
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
