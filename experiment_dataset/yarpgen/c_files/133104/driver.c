#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)514;
short var_2 = (short)23313;
long long int var_3 = 552340272785366579LL;
unsigned long long int var_7 = 12467383372373102716ULL;
unsigned long long int var_8 = 603393633823652032ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 14859122584102013490ULL;
unsigned long long int var_12 = 1304390998841015610ULL;
short var_13 = (short)-1684;
short var_16 = (short)24048;
int zero = 0;
unsigned short var_19 = (unsigned short)18623;
signed char var_20 = (signed char)0;
signed char var_21 = (signed char)-86;
unsigned char var_22 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
