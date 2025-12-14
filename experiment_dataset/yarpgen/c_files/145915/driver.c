#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1851880076;
int var_4 = 1089542621;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)45566;
signed char var_10 = (signed char)-69;
int zero = 0;
unsigned int var_16 = 1389063674U;
short var_17 = (short)-27569;
unsigned short var_18 = (unsigned short)34443;
void init() {
}

void checksum() {
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
