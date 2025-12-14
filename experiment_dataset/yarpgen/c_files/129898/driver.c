#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3101109911U;
unsigned int var_1 = 1607129175U;
unsigned char var_7 = (unsigned char)47;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-12779;
int zero = 0;
int var_14 = -1888574358;
signed char var_15 = (signed char)71;
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
