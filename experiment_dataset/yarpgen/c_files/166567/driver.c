#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42917;
unsigned long long int var_3 = 15916182495021724188ULL;
signed char var_4 = (signed char)-121;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5221313051109775010LL;
short var_14 = (short)14330;
long long int var_16 = 8986565983710335966LL;
int var_18 = -792288758;
int zero = 0;
short var_20 = (short)17791;
int var_21 = -504578039;
unsigned int var_22 = 1676827988U;
short var_23 = (short)23469;
long long int var_24 = -6203346348274022703LL;
unsigned char var_25 = (unsigned char)130;
unsigned int var_26 = 1115622498U;
long long int var_27 = -936311585542675111LL;
signed char var_28 = (signed char)-24;
_Bool var_29 = (_Bool)1;
int var_30 = -342459288;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)-63;
unsigned long long int var_33 = 8178114134147269615ULL;
signed char var_34 = (signed char)-3;
long long int var_35 = 7735867300498415104LL;
unsigned int var_36 = 173731098U;
short var_37 = (short)-17350;
int arr_0 [25] [25] ;
_Bool arr_1 [25] [25] ;
signed char arr_2 [13] ;
unsigned short arr_10 [13] [13] [13] [13] ;
short arr_21 [13] [13] ;
unsigned short arr_24 [22] [22] ;
unsigned int arr_4 [13] [13] ;
unsigned char arr_25 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -901759695;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19665;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (short)24573;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)52620;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 747771456U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)171;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
