#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8003;
unsigned int var_4 = 1299601899U;
unsigned char var_5 = (unsigned char)253;
unsigned int var_6 = 1128424877U;
unsigned long long int var_10 = 17919102694527054103ULL;
unsigned int var_11 = 2908233879U;
unsigned short var_12 = (unsigned short)16053;
unsigned char var_13 = (unsigned char)120;
unsigned short var_15 = (unsigned short)41318;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-90;
unsigned char var_18 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
