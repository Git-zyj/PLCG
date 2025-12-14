#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11653820582756127819ULL;
unsigned int var_4 = 1637059405U;
int var_7 = 823905328;
unsigned short var_9 = (unsigned short)23529;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3443697156U;
signed char var_13 = (signed char)96;
unsigned long long int var_14 = 16788130008041653315ULL;
unsigned short var_15 = (unsigned short)27115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
