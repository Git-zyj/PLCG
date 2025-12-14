#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2053686090U;
long long int var_3 = 379194520838942829LL;
long long int var_4 = -1782853494168786856LL;
long long int var_6 = -9096815918678410183LL;
unsigned int var_7 = 50955637U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-93;
long long int var_11 = -8067322749853005719LL;
int zero = 0;
short var_13 = (short)30068;
signed char var_14 = (signed char)-28;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)54;
signed char var_17 = (signed char)58;
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
