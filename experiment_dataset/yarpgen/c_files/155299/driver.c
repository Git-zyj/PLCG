#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2751125265U;
unsigned int var_5 = 3349660680U;
int var_6 = -1953029639;
unsigned int var_8 = 2319497606U;
unsigned char var_11 = (unsigned char)196;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7442648677135010826LL;
_Bool var_16 = (_Bool)1;
int var_17 = -1350385708;
signed char var_18 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
