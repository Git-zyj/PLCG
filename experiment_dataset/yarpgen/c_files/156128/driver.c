#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -790950509;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)27826;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3429646157U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)15677;
int zero = 0;
unsigned int var_12 = 1444411921U;
int var_13 = 56644103;
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
