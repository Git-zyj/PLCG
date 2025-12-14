#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2311;
signed char var_6 = (signed char)33;
unsigned short var_8 = (unsigned short)20597;
int var_9 = 1817462596;
signed char var_10 = (signed char)-85;
unsigned char var_11 = (unsigned char)144;
long long int var_15 = -8938108404381016853LL;
unsigned short var_17 = (unsigned short)46598;
short var_19 = (short)-32254;
int zero = 0;
signed char var_20 = (signed char)58;
unsigned char var_21 = (unsigned char)74;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-82;
unsigned long long int var_24 = 8629389091464895880ULL;
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
