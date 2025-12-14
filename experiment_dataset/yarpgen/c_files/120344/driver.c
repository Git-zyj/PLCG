#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11320698640752466685ULL;
signed char var_6 = (signed char)29;
unsigned short var_7 = (unsigned short)35870;
unsigned char var_9 = (unsigned char)239;
signed char var_11 = (signed char)-85;
int zero = 0;
signed char var_12 = (signed char)-14;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4041806587U;
unsigned long long int var_15 = 1899290685849969240ULL;
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
