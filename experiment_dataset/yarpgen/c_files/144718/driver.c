#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34756;
short var_1 = (short)21952;
short var_2 = (short)23540;
signed char var_3 = (signed char)-81;
unsigned short var_4 = (unsigned short)5818;
unsigned char var_5 = (unsigned char)159;
long long int var_7 = 5875031400588293124LL;
unsigned char var_8 = (unsigned char)53;
signed char var_10 = (signed char)114;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
unsigned short var_17 = (unsigned short)30319;
short var_18 = (short)7430;
unsigned short var_19 = (unsigned short)3665;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
