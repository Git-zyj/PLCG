#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -146506107;
int var_12 = 408211237;
signed char var_13 = (signed char)20;
int var_15 = -443285751;
int zero = 0;
int var_16 = -218626140;
unsigned char var_17 = (unsigned char)245;
unsigned int var_18 = 39698652U;
void init() {
}

void checksum() {
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
