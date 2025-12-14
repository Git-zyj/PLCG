#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2027614638U;
unsigned int var_10 = 4167148418U;
unsigned short var_12 = (unsigned short)14052;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 475763004431154795LL;
signed char var_17 = (signed char)-65;
unsigned char var_18 = (unsigned char)52;
unsigned short var_19 = (unsigned short)5513;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
