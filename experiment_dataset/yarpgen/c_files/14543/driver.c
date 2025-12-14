#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)51;
int var_4 = 428403154;
int var_6 = 1529823072;
unsigned int var_8 = 2682480877U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-13526;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
signed char var_14 = (signed char)69;
int var_15 = 1497708788;
unsigned char var_16 = (unsigned char)69;
unsigned char var_17 = (unsigned char)204;
short var_18 = (short)2528;
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
