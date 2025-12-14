#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)68;
long long int var_6 = 3729344628776092068LL;
unsigned char var_7 = (unsigned char)174;
unsigned long long int var_8 = 11290557295274182147ULL;
int zero = 0;
unsigned int var_10 = 3421318951U;
short var_11 = (short)8145;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
