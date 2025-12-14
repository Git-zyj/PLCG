#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30242;
unsigned short var_7 = (unsigned short)28971;
unsigned short var_12 = (unsigned short)64001;
unsigned short var_13 = (unsigned short)38709;
int zero = 0;
unsigned short var_14 = (unsigned short)54120;
signed char var_15 = (signed char)-73;
void init() {
}

void checksum() {
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
