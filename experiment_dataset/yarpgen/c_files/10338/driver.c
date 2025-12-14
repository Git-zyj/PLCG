#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned char var_2 = (unsigned char)101;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11383455254701049164ULL;
long long int var_6 = -4141699989863913895LL;
unsigned char var_9 = (unsigned char)46;
signed char var_10 = (signed char)33;
unsigned char var_11 = (unsigned char)1;
unsigned short var_13 = (unsigned short)40797;
unsigned char var_14 = (unsigned char)71;
unsigned long long int var_15 = 16403532700126681308ULL;
int zero = 0;
int var_18 = -56569435;
long long int var_19 = -423270535941375156LL;
int var_20 = 2128406312;
int var_21 = -1474884702;
signed char var_22 = (signed char)-59;
unsigned short var_23 = (unsigned short)26648;
unsigned char var_24 = (unsigned char)52;
unsigned int var_25 = 156495139U;
unsigned long long int var_26 = 5902501724776653223ULL;
unsigned char var_27 = (unsigned char)45;
unsigned char var_28 = (unsigned char)47;
unsigned char var_29 = (unsigned char)183;
short arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned char arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] ;
int arr_12 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-20038;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1629695299U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)30483;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)61 : (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -233944129;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
