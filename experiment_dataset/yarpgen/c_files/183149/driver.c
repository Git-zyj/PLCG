#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11855571767127838769ULL;
unsigned int var_4 = 3444684032U;
unsigned short var_11 = (unsigned short)62114;
int zero = 0;
long long int var_16 = -7350511623635020485LL;
long long int var_17 = -6133456328952765966LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
