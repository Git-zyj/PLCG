#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned char var_1 = (unsigned char)83;
unsigned short var_2 = (unsigned short)55200;
unsigned long long int var_3 = 2967366905526810826ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)57176;
unsigned long long int var_6 = 12807868899302950862ULL;
unsigned char var_7 = (unsigned char)243;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)15377;
unsigned short var_11 = (unsigned short)62386;
int zero = 0;
unsigned short var_12 = (unsigned short)17657;
unsigned char var_13 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
