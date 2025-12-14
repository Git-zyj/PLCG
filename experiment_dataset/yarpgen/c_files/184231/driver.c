#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3370215147U;
unsigned long long int var_2 = 5770783310439757886ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -995898158;
unsigned short var_6 = (unsigned short)18214;
int var_10 = 356417310;
short var_11 = (short)-23913;
signed char var_12 = (signed char)-85;
int zero = 0;
signed char var_13 = (signed char)-34;
unsigned char var_14 = (unsigned char)251;
unsigned long long int var_15 = 16348221638467792863ULL;
int var_16 = 1404853389;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
