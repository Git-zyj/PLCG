#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41463;
unsigned short var_13 = (unsigned short)33943;
int var_16 = -1914866579;
unsigned short var_17 = (unsigned short)28346;
int zero = 0;
unsigned int var_18 = 830125925U;
long long int var_19 = -3608072271816766513LL;
signed char var_20 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
