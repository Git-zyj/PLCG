#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14225188886293812026ULL;
int var_6 = -1946063447;
signed char var_9 = (signed char)-66;
signed char var_10 = (signed char)-7;
unsigned long long int var_11 = 2551238831347564588ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
