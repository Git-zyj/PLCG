#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-116;
unsigned int var_10 = 4118395488U;
unsigned int var_17 = 4089408588U;
signed char var_19 = (signed char)-89;
int zero = 0;
short var_20 = (short)14167;
unsigned short var_21 = (unsigned short)54363;
unsigned char var_22 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
