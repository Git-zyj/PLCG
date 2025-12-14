#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-98;
unsigned int var_4 = 716228988U;
unsigned int var_6 = 1805731941U;
unsigned int var_7 = 1475306549U;
signed char var_11 = (signed char)29;
unsigned short var_13 = (unsigned short)42930;
int zero = 0;
unsigned int var_14 = 425900938U;
signed char var_15 = (signed char)-106;
void init() {
}

void checksum() {
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
