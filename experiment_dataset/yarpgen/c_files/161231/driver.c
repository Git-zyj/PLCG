#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
long long int var_1 = -5879080465908337746LL;
unsigned char var_2 = (unsigned char)57;
int var_3 = -820765050;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)31384;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2238581184258189952LL;
int zero = 0;
unsigned char var_13 = (unsigned char)86;
unsigned int var_14 = 1867695638U;
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
