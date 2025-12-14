#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1343122799U;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 655201532U;
int zero = 0;
unsigned char var_12 = (unsigned char)109;
signed char var_13 = (signed char)-69;
unsigned short var_14 = (unsigned short)43522;
void init() {
}

void checksum() {
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
