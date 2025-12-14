#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
long long int var_1 = -494294235567602476LL;
short var_5 = (short)-27030;
signed char var_7 = (signed char)26;
unsigned short var_11 = (unsigned short)65100;
int zero = 0;
short var_12 = (short)24901;
unsigned char var_13 = (unsigned char)66;
_Bool var_14 = (_Bool)1;
short var_15 = (short)11326;
long long int var_16 = 940820104854628231LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
