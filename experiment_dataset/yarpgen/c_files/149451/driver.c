#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2534223466718399928LL;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 1971898602U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-32715;
int var_11 = 1264735442;
short var_12 = (short)-2947;
signed char var_13 = (signed char)28;
short var_14 = (short)30459;
int zero = 0;
unsigned short var_16 = (unsigned short)29058;
unsigned char var_17 = (unsigned char)109;
unsigned long long int var_18 = 10672388644054967963ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
