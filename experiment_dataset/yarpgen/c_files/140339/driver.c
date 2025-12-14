#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1310988954;
unsigned char var_3 = (unsigned char)227;
signed char var_4 = (signed char)28;
unsigned int var_10 = 3815988577U;
unsigned int var_12 = 3927642135U;
long long int var_15 = 4244961723300155361LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3962580647U;
int var_18 = 1398238692;
unsigned short var_19 = (unsigned short)15133;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
