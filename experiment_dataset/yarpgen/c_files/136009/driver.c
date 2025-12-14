#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 350691504;
signed char var_2 = (signed char)-8;
unsigned char var_3 = (unsigned char)166;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)38;
short var_11 = (short)-15659;
signed char var_12 = (signed char)-28;
int var_13 = -1307421919;
int zero = 0;
unsigned short var_14 = (unsigned short)51644;
int var_15 = 1424909106;
signed char var_16 = (signed char)120;
signed char var_17 = (signed char)92;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)-41;
signed char var_20 = (signed char)-65;
signed char arr_1 [22] ;
unsigned char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
