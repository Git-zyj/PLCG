#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5055143015642842111LL;
unsigned int var_4 = 453867424U;
unsigned char var_7 = (unsigned char)28;
int var_8 = -2152629;
int var_9 = -24465987;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)212;
int var_12 = 2008500620;
unsigned char var_13 = (unsigned char)1;
unsigned char var_14 = (unsigned char)91;
short var_15 = (short)-11301;
unsigned int var_16 = 684182883U;
unsigned long long int var_17 = 5535553036395479490ULL;
unsigned long long int var_18 = 7563241333963833528ULL;
unsigned char var_19 = (unsigned char)159;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned char arr_2 [18] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1264859445U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-8746;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
