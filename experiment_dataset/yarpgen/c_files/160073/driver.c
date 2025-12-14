#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
long long int var_1 = -1660790619495887503LL;
unsigned long long int var_4 = 5789260931283482909ULL;
signed char var_5 = (signed char)-25;
unsigned short var_8 = (unsigned short)58931;
unsigned short var_12 = (unsigned short)24000;
signed char var_13 = (signed char)48;
long long int var_14 = 1913086243346837043LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 13717919956024491088ULL;
int zero = 0;
int var_19 = 982861671;
unsigned long long int var_20 = 8286539856409257490ULL;
unsigned long long int var_21 = 11410325064824077499ULL;
int var_22 = -938350706;
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
