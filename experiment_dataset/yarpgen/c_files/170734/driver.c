#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 84276171;
signed char var_10 = (signed char)-96;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_18 = (short)3906;
unsigned char var_19 = (unsigned char)74;
unsigned int var_20 = 1729871826U;
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
