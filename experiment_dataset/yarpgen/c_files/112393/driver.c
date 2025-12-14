#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3405394902U;
long long int var_10 = 1369798069764008343LL;
unsigned long long int var_11 = 6932801270644539258ULL;
signed char var_12 = (signed char)83;
unsigned int var_14 = 2437876374U;
int zero = 0;
unsigned short var_16 = (unsigned short)42371;
signed char var_17 = (signed char)77;
long long int var_18 = 2937960800423159954LL;
void init() {
}

void checksum() {
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
