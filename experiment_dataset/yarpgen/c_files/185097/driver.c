#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2710832163518104513ULL;
long long int var_5 = 5991101167016205060LL;
unsigned short var_11 = (unsigned short)40572;
int zero = 0;
unsigned short var_12 = (unsigned short)6855;
unsigned int var_13 = 2285268655U;
unsigned short var_14 = (unsigned short)24474;
signed char var_15 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
