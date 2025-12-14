#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51888;
int var_1 = -322108258;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-61;
int zero = 0;
signed char var_10 = (signed char)-19;
unsigned short var_11 = (unsigned short)35609;
signed char var_12 = (signed char)-42;
long long int var_13 = 751321344151635046LL;
unsigned char var_14 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
