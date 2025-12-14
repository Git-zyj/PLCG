#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20993;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-15;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)141;
long long int var_11 = 8013449631520976033LL;
unsigned int var_12 = 4254798213U;
int zero = 0;
short var_13 = (short)-12494;
int var_14 = 1949066571;
unsigned char var_15 = (unsigned char)42;
signed char var_16 = (signed char)121;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)43122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)76;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
