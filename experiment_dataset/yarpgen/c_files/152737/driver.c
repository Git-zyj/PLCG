#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49601;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)34733;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-30190;
unsigned int var_13 = 3575783956U;
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
