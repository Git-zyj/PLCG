#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36070;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2006954643844774507LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1223147753U;
long long int var_5 = 9089461906272027526LL;
signed char var_6 = (signed char)78;
unsigned int var_7 = 657246567U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)134;
int zero = 0;
unsigned short var_10 = (unsigned short)27335;
unsigned char var_11 = (unsigned char)139;
unsigned short var_12 = (unsigned short)31338;
unsigned char var_13 = (unsigned char)32;
long long int var_14 = -7965799762702041069LL;
int var_15 = 2120628820;
_Bool var_16 = (_Bool)1;
short var_17 = (short)21069;
unsigned long long int var_18 = 14068910145205067388ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)23295;
unsigned int var_21 = 4288395522U;
unsigned int var_22 = 877730792U;
unsigned long long int var_23 = 11269750628159947314ULL;
short var_24 = (short)-25565;
long long int var_25 = 8627495019267543812LL;
unsigned char var_26 = (unsigned char)205;
int var_27 = -1987561245;
unsigned char var_28 = (unsigned char)78;
unsigned int var_29 = 2520984532U;
unsigned long long int var_30 = 2097143698607945606ULL;
unsigned short var_31 = (unsigned short)41436;
signed char var_32 = (signed char)-41;
unsigned char var_33 = (unsigned char)137;
int var_34 = -1268987503;
int var_35 = -928839128;
unsigned char var_36 = (unsigned char)77;
unsigned int var_37 = 2745179376U;
unsigned short arr_13 [13] [13] [13] [13] ;
unsigned int arr_28 [13] [13] [13] ;
unsigned char arr_31 [13] [13] [13] ;
int arr_55 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)27372 : (unsigned short)20771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1970913894U : 2961783301U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = -326701171;
}

void checksum() {
    hash(&seed, var_10);
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
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
