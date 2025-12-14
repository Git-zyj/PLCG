#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 814196486424282606LL;
unsigned short var_10 = (unsigned short)42051;
signed char var_11 = (signed char)-99;
unsigned long long int var_13 = 11644506524476673197ULL;
long long int var_14 = -5559050665324446805LL;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)8;
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
