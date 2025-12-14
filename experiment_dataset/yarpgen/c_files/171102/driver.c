#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1643389860U;
unsigned char var_5 = (unsigned char)174;
signed char var_7 = (signed char)27;
unsigned char var_10 = (unsigned char)37;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 475161655U;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned char var_16 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
