#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -825047880;
unsigned short var_1 = (unsigned short)39345;
unsigned int var_2 = 2878932834U;
unsigned char var_3 = (unsigned char)106;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2377081410200935037ULL;
short var_10 = (short)-26698;
_Bool var_11 = (_Bool)0;
long long int var_13 = -2339120862812792447LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)114;
long long int var_17 = 1890479452622244734LL;
unsigned long long int var_18 = 11334544330172776330ULL;
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
