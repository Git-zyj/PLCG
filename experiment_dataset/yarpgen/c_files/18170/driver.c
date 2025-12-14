#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
int var_12 = 2009198703;
long long int var_15 = 4315502115768293954LL;
unsigned char var_17 = (unsigned char)86;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
short var_20 = (short)23063;
signed char var_21 = (signed char)-60;
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
