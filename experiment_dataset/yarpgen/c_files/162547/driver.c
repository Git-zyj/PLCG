#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3995;
unsigned int var_6 = 4018042028U;
unsigned char var_8 = (unsigned char)185;
unsigned short var_10 = (unsigned short)7402;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)49;
unsigned long long int var_16 = 10896376176853200935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
