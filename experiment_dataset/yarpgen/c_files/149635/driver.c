#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1698345853;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)14759;
unsigned int var_10 = 3015962296U;
unsigned char var_13 = (unsigned char)95;
unsigned short var_15 = (unsigned short)29871;
long long int var_17 = -4182595941602035154LL;
int zero = 0;
unsigned long long int var_19 = 11448117848137642016ULL;
unsigned char var_20 = (unsigned char)31;
signed char var_21 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
