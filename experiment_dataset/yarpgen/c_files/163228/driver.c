#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
signed char var_1 = (signed char)-27;
unsigned short var_2 = (unsigned short)63730;
short var_3 = (short)28070;
signed char var_4 = (signed char)-60;
unsigned short var_5 = (unsigned short)44470;
unsigned int var_6 = 2409666282U;
unsigned long long int var_7 = 3713968110590307389ULL;
unsigned short var_8 = (unsigned short)62579;
int var_9 = -2035360973;
short var_10 = (short)-7462;
int zero = 0;
unsigned short var_11 = (unsigned short)6104;
unsigned char var_12 = (unsigned char)22;
unsigned char var_13 = (unsigned char)74;
signed char var_14 = (signed char)126;
long long int var_15 = -1173072392117651705LL;
unsigned char var_16 = (unsigned char)24;
long long int var_17 = 9141663436931423711LL;
unsigned short var_18 = (unsigned short)22817;
_Bool var_19 = (_Bool)1;
short var_20 = (short)12721;
short var_21 = (short)-3760;
long long int var_22 = 5223857382641556314LL;
unsigned short var_23 = (unsigned short)13555;
int var_24 = 1708687544;
unsigned char var_25 = (unsigned char)56;
short var_26 = (short)-2790;
unsigned long long int var_27 = 6180723507793438721ULL;
unsigned char arr_21 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)181;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
