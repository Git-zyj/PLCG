#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned int var_2 = 2820727071U;
unsigned long long int var_3 = 16055661736752228166ULL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
long long int var_11 = -1986758760783814437LL;
unsigned char var_12 = (unsigned char)62;
int var_13 = 197309570;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
