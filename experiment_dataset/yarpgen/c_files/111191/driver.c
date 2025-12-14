#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1357311007919719626LL;
unsigned long long int var_1 = 17088589829878318970ULL;
unsigned int var_3 = 430838753U;
signed char var_4 = (signed char)-13;
long long int var_5 = -1924217264273234762LL;
long long int var_6 = -9154974445242309188LL;
_Bool var_7 = (_Bool)0;
int var_8 = 1243636592;
short var_9 = (short)-18700;
unsigned short var_10 = (unsigned short)36315;
short var_11 = (short)-1662;
unsigned char var_12 = (unsigned char)153;
long long int var_13 = -8669166569974860421LL;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
short var_15 = (short)31475;
short var_16 = (short)-11492;
unsigned short var_17 = (unsigned short)47072;
void init() {
}

void checksum() {
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
