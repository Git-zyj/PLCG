#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
signed char var_1 = (signed char)-95;
unsigned int var_2 = 3033172731U;
signed char var_4 = (signed char)66;
long long int var_5 = 2217968375002542820LL;
unsigned int var_9 = 1298060567U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)150;
unsigned short var_12 = (unsigned short)42531;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1117389419U;
unsigned char var_15 = (unsigned char)252;
unsigned short var_16 = (unsigned short)53813;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
