#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40269;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)59;
unsigned long long int var_8 = 1822174951769869190ULL;
int zero = 0;
unsigned int var_14 = 765002424U;
signed char var_15 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
