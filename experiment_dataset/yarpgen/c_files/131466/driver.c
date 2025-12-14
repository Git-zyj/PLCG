#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_2 = -3300023350605461143LL;
int var_10 = -853759350;
int zero = 0;
unsigned short var_15 = (unsigned short)54407;
signed char var_16 = (signed char)127;
unsigned long long int var_17 = 16672774883897321181ULL;
unsigned int var_18 = 2759910967U;
void init() {
}

void checksum() {
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
