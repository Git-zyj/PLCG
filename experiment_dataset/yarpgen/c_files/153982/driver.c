#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8360575006878827156LL;
unsigned int var_3 = 3823280437U;
_Bool var_5 = (_Bool)1;
int var_8 = 529018703;
signed char var_9 = (signed char)-43;
int var_11 = 194714985;
short var_12 = (short)8263;
short var_13 = (short)20493;
unsigned short var_14 = (unsigned short)14081;
signed char var_16 = (signed char)62;
unsigned short var_17 = (unsigned short)8545;
int zero = 0;
unsigned short var_18 = (unsigned short)51407;
int var_19 = 499648932;
void init() {
}

void checksum() {
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
