#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6973;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 868560679U;
unsigned int var_9 = 3132611590U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 4023949044U;
short var_13 = (short)4405;
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
