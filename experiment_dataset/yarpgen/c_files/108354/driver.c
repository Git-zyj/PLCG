#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 717826661U;
unsigned char var_1 = (unsigned char)23;
long long int var_3 = -7460714848773557607LL;
unsigned char var_4 = (unsigned char)186;
short var_6 = (short)5385;
int var_7 = 128910873;
unsigned short var_8 = (unsigned short)32032;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_11 = 1908142293;
long long int var_12 = 4924538144384103356LL;
signed char var_13 = (signed char)-73;
signed char var_14 = (signed char)75;
unsigned short var_15 = (unsigned short)42595;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-16;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)3;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
