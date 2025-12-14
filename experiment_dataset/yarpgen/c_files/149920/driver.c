#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7831;
unsigned char var_3 = (unsigned char)14;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 219452609U;
int zero = 0;
int var_15 = -152145539;
unsigned int var_16 = 4235918504U;
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
