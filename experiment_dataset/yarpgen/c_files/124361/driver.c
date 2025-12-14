#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)158;
long long int var_10 = 2671403034715742780LL;
signed char var_13 = (signed char)112;
signed char var_16 = (signed char)-19;
int zero = 0;
unsigned char var_17 = (unsigned char)149;
int var_18 = 1802037081;
short var_19 = (short)-25481;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
