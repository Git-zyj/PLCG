#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-87;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_15 = 10666805549912514262ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)200;
signed char var_17 = (signed char)127;
void init() {
}

void checksum() {
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
