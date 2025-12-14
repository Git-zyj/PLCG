#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned long long int var_2 = 3593784949246094269ULL;
unsigned char var_6 = (unsigned char)12;
unsigned short var_7 = (unsigned short)49228;
signed char var_8 = (signed char)-29;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = -884220395;
unsigned char var_12 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
