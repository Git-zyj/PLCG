#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_2 = 8287094223478731663ULL;
unsigned int var_4 = 439224494U;
unsigned long long int var_10 = 2572082993309291637ULL;
signed char var_13 = (signed char)-78;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
short var_15 = (short)19505;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)49892;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
