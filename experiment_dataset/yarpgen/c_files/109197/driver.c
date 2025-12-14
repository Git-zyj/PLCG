#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1141549947U;
unsigned char var_3 = (unsigned char)163;
unsigned short var_6 = (unsigned short)40011;
unsigned char var_7 = (unsigned char)16;
signed char var_12 = (signed char)-36;
int var_13 = -1636921965;
int var_15 = -1786030712;
unsigned long long int var_16 = 4433189338385223441ULL;
unsigned int var_17 = 1616438295U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 664147596U;
unsigned long long int var_20 = 5665166372545118798ULL;
signed char var_21 = (signed char)25;
unsigned short var_22 = (unsigned short)63338;
long long int var_23 = -6489881701163870506LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
