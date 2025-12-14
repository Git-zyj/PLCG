#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6129553643687964747LL;
int var_2 = 1936014805;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 2568358566411567464ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)154;
int var_7 = 1585585076;
long long int var_8 = 2051900826376605660LL;
signed char var_9 = (signed char)-69;
unsigned char var_10 = (unsigned char)255;
short var_11 = (short)-12989;
_Bool var_13 = (_Bool)0;
short var_14 = (short)6947;
unsigned short var_16 = (unsigned short)6317;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
int var_18 = 1423065956;
signed char var_19 = (signed char)-71;
long long int var_20 = 2643993131618460562LL;
unsigned int var_21 = 2680222258U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
