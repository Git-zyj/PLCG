#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7419;
long long int var_1 = -5819110800165221600LL;
unsigned long long int var_5 = 17356153891909482173ULL;
unsigned int var_9 = 3244316292U;
unsigned char var_10 = (unsigned char)144;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
short var_13 = (short)16162;
signed char var_14 = (signed char)-96;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)215;
unsigned long long int var_17 = 2216508972951041707ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
