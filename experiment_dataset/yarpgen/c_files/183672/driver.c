#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2022066556U;
short var_4 = (short)-27315;
short var_8 = (short)-14524;
unsigned short var_9 = (unsigned short)18930;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3365400989U;
unsigned short var_12 = (unsigned short)6717;
int zero = 0;
unsigned short var_13 = (unsigned short)24106;
short var_14 = (short)-20664;
void init() {
}

void checksum() {
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
