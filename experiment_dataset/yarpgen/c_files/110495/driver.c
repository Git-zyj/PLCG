#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6983109975136308179LL;
unsigned char var_5 = (unsigned char)57;
signed char var_6 = (signed char)-108;
short var_7 = (short)-23131;
long long int var_8 = -4476032087514720220LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 868893664U;
short var_12 = (short)19471;
unsigned char var_15 = (unsigned char)26;
unsigned char var_16 = (unsigned char)144;
int zero = 0;
unsigned int var_20 = 717150774U;
long long int var_21 = -3819895601095878172LL;
short var_22 = (short)19253;
short var_23 = (short)23149;
unsigned int var_24 = 2728389867U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
