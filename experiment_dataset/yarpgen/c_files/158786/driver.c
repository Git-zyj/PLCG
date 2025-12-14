#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29066;
unsigned long long int var_3 = 10941185944665244681ULL;
unsigned short var_5 = (unsigned short)2540;
unsigned long long int var_6 = 2245029347941001265ULL;
unsigned long long int var_8 = 11425573480657237997ULL;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
unsigned int var_15 = 318968469U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)6365;
unsigned long long int var_18 = 16948618439302832425ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
