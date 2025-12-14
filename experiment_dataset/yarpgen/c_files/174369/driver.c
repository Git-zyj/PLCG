#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19878;
signed char var_2 = (signed char)65;
unsigned long long int var_3 = 18274422965034533608ULL;
signed char var_8 = (signed char)80;
unsigned char var_9 = (unsigned char)63;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2147424336U;
unsigned short var_12 = (unsigned short)5036;
unsigned char var_14 = (unsigned char)211;
signed char var_16 = (signed char)-31;
unsigned short var_17 = (unsigned short)18504;
signed char var_19 = (signed char)-75;
int zero = 0;
long long int var_20 = -1367424030255691920LL;
signed char var_21 = (signed char)-23;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
