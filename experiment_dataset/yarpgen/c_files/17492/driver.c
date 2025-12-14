#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12030888194379241441ULL;
signed char var_3 = (signed char)-39;
unsigned short var_6 = (unsigned short)28364;
unsigned short var_11 = (unsigned short)32059;
unsigned char var_13 = (unsigned char)174;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1428627892U;
int var_21 = 1011823700;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
