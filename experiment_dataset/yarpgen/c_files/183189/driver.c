#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
signed char var_3 = (signed char)-32;
unsigned short var_8 = (unsigned short)47107;
unsigned int var_9 = 3507017673U;
short var_13 = (short)26562;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
