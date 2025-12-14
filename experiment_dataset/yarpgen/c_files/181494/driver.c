#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
unsigned int var_6 = 2282552539U;
unsigned short var_7 = (unsigned short)41162;
unsigned int var_12 = 3171324098U;
signed char var_14 = (signed char)-75;
short var_16 = (short)29690;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)48793;
short var_21 = (short)12628;
void init() {
}

void checksum() {
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
