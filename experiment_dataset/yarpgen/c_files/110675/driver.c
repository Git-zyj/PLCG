#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1623627128;
long long int var_1 = 8477931058306379406LL;
unsigned int var_2 = 2622283300U;
unsigned short var_3 = (unsigned short)56145;
unsigned char var_6 = (unsigned char)166;
int var_7 = 279557020;
unsigned int var_9 = 821130765U;
short var_11 = (short)25967;
signed char var_13 = (signed char)-27;
long long int var_14 = -6022951766662986211LL;
int zero = 0;
unsigned short var_15 = (unsigned short)33850;
unsigned char var_16 = (unsigned char)106;
unsigned long long int var_17 = 6919816847318586307ULL;
unsigned short var_18 = (unsigned short)44424;
unsigned short var_19 = (unsigned short)55192;
unsigned int var_20 = 378849839U;
unsigned long long int var_21 = 17070939235002275588ULL;
signed char var_22 = (signed char)-68;
signed char var_23 = (signed char)-86;
unsigned long long int var_24 = 14223519826657670546ULL;
int var_25 = 1795031643;
signed char var_26 = (signed char)61;
long long int var_27 = -1577273734278780004LL;
short var_28 = (short)24481;
unsigned short var_29 = (unsigned short)51945;
short var_30 = (short)-31949;
signed char var_31 = (signed char)99;
unsigned short var_32 = (unsigned short)52087;
int var_33 = 78145028;
unsigned int var_34 = 116664867U;
signed char var_35 = (signed char)37;
unsigned int var_36 = 3254740025U;
short var_37 = (short)-22682;
signed char var_38 = (signed char)-72;
unsigned int var_39 = 1794519950U;
int var_40 = 2126889450;
int var_41 = -2104448697;
unsigned short var_42 = (unsigned short)19500;
signed char var_43 = (signed char)29;
unsigned short var_44 = (unsigned short)19694;
unsigned char var_45 = (unsigned char)211;
unsigned int var_46 = 3556862111U;
short var_47 = (short)-10812;
unsigned short var_48 = (unsigned short)9537;
short var_49 = (short)-2724;
unsigned int arr_0 [16] ;
signed char arr_1 [16] [16] ;
short arr_3 [14] ;
unsigned char arr_4 [14] ;
long long int arr_6 [14] [14] ;
unsigned int arr_7 [14] ;
_Bool arr_15 [14] [14] [14] [14] [14] [14] ;
unsigned short arr_18 [14] [14] ;
unsigned short arr_21 [14] [14] [14] [14] [14] ;
short arr_23 [14] [14] [14] [14] [14] ;
short arr_26 [14] [14] [14] [14] ;
unsigned int arr_27 [14] [14] [14] [14] [14] [14] [14] ;
int arr_2 [16] ;
long long int arr_9 [14] ;
int arr_22 [14] [14] [14] [14] [14] ;
signed char arr_41 [14] ;
unsigned short arr_42 [14] [14] ;
unsigned short arr_43 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3267594581U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-14374;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 3887539371402277316LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 968266041U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)49318;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)17688;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-1060;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-9374 : (short)-14996;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 2142335934U : 1720933702U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 845964062;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 2786781682089560973LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -1598802908;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_41 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_42 [i_0] [i_1] = (unsigned short)22430;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_43 [i_0] [i_1] = (unsigned short)21113;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
