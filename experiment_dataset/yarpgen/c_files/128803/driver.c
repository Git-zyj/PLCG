#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29327;
unsigned char var_3 = (unsigned char)183;
short var_6 = (short)27217;
signed char var_7 = (signed char)-26;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_15 = 661596471;
long long int var_16 = 8005390698009892963LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
