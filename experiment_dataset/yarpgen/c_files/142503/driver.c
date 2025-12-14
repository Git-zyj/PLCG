#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12977;
signed char var_2 = (signed char)-71;
unsigned int var_4 = 611593989U;
signed char var_6 = (signed char)95;
unsigned int var_10 = 2683899649U;
int zero = 0;
unsigned int var_11 = 495482062U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)9;
short var_14 = (short)2511;
void init() {
}

void checksum() {
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
