#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1024110190;
int var_6 = 95703728;
signed char var_7 = (signed char)-9;
short var_8 = (short)23041;
short var_14 = (short)20347;
short var_18 = (short)16498;
int zero = 0;
int var_19 = 2086375931;
unsigned int var_20 = 2594116794U;
int var_21 = 1005182911;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
