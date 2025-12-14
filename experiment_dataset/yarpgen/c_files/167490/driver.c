#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)60;
unsigned long long int var_2 = 5318167473166383108ULL;
int var_5 = 1834745933;
unsigned int var_6 = 2245869611U;
unsigned long long int var_7 = 2312608177356463946ULL;
unsigned int var_8 = 2196099610U;
unsigned int var_10 = 2011080880U;
unsigned int var_11 = 748302906U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -830643566;
unsigned int var_17 = 3637042788U;
int var_18 = -1070163795;
unsigned short var_19 = (unsigned short)3106;
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
