#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_9 = -1432115941;
signed char var_10 = (signed char)28;
unsigned short var_15 = (unsigned short)44163;
unsigned char var_19 = (unsigned char)190;
int zero = 0;
signed char var_20 = (signed char)68;
unsigned short var_21 = (unsigned short)6621;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
