#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2233787477076796920ULL;
unsigned int var_6 = 1458988121U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)196;
unsigned int var_10 = 3235756490U;
unsigned short var_11 = (unsigned short)36438;
long long int var_12 = -8460630044809753415LL;
unsigned long long int var_13 = 13883093854113273546ULL;
unsigned int var_16 = 2894849915U;
int zero = 0;
unsigned long long int var_17 = 2349608525565517309ULL;
signed char var_18 = (signed char)-36;
unsigned short var_19 = (unsigned short)59619;
int var_20 = -1938902528;
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
