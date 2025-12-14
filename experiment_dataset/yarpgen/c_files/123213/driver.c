#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2512210452114677282LL;
unsigned long long int var_7 = 16869670199511923602ULL;
short var_8 = (short)-1977;
unsigned short var_9 = (unsigned short)41487;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)11222;
unsigned char var_13 = (unsigned char)73;
short var_14 = (short)24628;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)5878;
unsigned long long int var_18 = 1335669767232871377ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-72;
unsigned int var_21 = 145263033U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
