#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63240;
_Bool var_5 = (_Bool)0;
long long int var_6 = -1513514391326706631LL;
long long int var_8 = -2940946830112131624LL;
signed char var_9 = (signed char)29;
signed char var_10 = (signed char)32;
unsigned short var_12 = (unsigned short)12874;
int var_13 = 764356871;
signed char var_14 = (signed char)64;
short var_15 = (short)11528;
short var_16 = (short)-23252;
int zero = 0;
unsigned long long int var_17 = 12308635015311650322ULL;
unsigned char var_18 = (unsigned char)57;
unsigned int var_19 = 2788131950U;
int var_20 = 731667763;
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
