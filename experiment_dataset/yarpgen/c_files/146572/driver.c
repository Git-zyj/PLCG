#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14570;
unsigned short var_3 = (unsigned short)20915;
unsigned short var_6 = (unsigned short)35278;
unsigned int var_7 = 4257711560U;
_Bool var_12 = (_Bool)1;
long long int var_17 = 27638236337433790LL;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned char var_20 = (unsigned char)241;
void init() {
}

void checksum() {
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
