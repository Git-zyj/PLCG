#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28679;
signed char var_1 = (signed char)64;
unsigned int var_5 = 3926641444U;
unsigned long long int var_6 = 12315692608753032046ULL;
unsigned char var_7 = (unsigned char)33;
unsigned short var_8 = (unsigned short)57442;
unsigned long long int var_10 = 9546328514922588499ULL;
int var_11 = 1769237243;
long long int var_12 = 7528859588703880352LL;
signed char var_14 = (signed char)-90;
int zero = 0;
long long int var_16 = 8920699655316379682LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)113;
unsigned char var_19 = (unsigned char)189;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
