#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
unsigned short var_4 = (unsigned short)28411;
short var_5 = (short)15140;
long long int var_10 = 8975209299924102493LL;
_Bool var_12 = (_Bool)1;
short var_16 = (short)-2293;
long long int var_17 = 6636633739996224148LL;
int zero = 0;
short var_19 = (short)-17450;
short var_20 = (short)-29249;
signed char var_21 = (signed char)-9;
void init() {
}

void checksum() {
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
