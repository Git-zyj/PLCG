#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57581;
unsigned char var_5 = (unsigned char)145;
signed char var_11 = (signed char)57;
unsigned char var_14 = (unsigned char)255;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)9400;
long long int var_17 = 5450765389512627361LL;
int zero = 0;
unsigned short var_18 = (unsigned short)58550;
short var_19 = (short)-5821;
unsigned char var_20 = (unsigned char)232;
void init() {
}

void checksum() {
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
