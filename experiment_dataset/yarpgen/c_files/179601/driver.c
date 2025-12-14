#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
int var_1 = -1944623221;
int var_3 = -1263728052;
signed char var_4 = (signed char)-79;
unsigned char var_7 = (unsigned char)17;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3633368702U;
unsigned int var_12 = 449033586U;
unsigned short var_13 = (unsigned short)33831;
_Bool var_14 = (_Bool)1;
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
