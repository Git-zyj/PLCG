#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1626032612668883010LL;
unsigned long long int var_1 = 15630209788192888519ULL;
long long int var_2 = 8884226856802715210LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)36680;
short var_5 = (short)-6500;
short var_6 = (short)18711;
long long int var_7 = -6681517639146640398LL;
int var_8 = -1107384833;
int var_9 = 622052577;
long long int var_10 = 6170221892340941603LL;
unsigned char var_11 = (unsigned char)170;
unsigned long long int var_12 = 5688518666330130082ULL;
unsigned int var_14 = 2008228082U;
int zero = 0;
unsigned char var_15 = (unsigned char)174;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)3499;
unsigned long long int var_20 = 5305635609239291510ULL;
unsigned int var_21 = 584099410U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)8239;
long long int var_24 = -785826764108213511LL;
unsigned short var_25 = (unsigned short)62671;
unsigned int var_26 = 1152131721U;
unsigned short var_27 = (unsigned short)35775;
unsigned char var_28 = (unsigned char)169;
short var_29 = (short)24257;
unsigned int var_30 = 3229676531U;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)193;
unsigned char var_34 = (unsigned char)62;
short var_35 = (short)29932;
unsigned int var_36 = 3165376937U;
_Bool var_37 = (_Bool)0;
int var_38 = -689266142;
unsigned int var_39 = 1654951453U;
unsigned long long int var_40 = 16043050750828225913ULL;
long long int var_41 = -5600370902827489669LL;
unsigned int var_42 = 2610124330U;
unsigned int var_43 = 3366014302U;
long long int var_44 = 3990337077925036524LL;
unsigned int var_45 = 2102418123U;
unsigned int var_46 = 3506078067U;
unsigned int var_47 = 1594155360U;
unsigned char var_48 = (unsigned char)33;
short var_49 = (short)-30551;
short arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
_Bool arr_3 [22] [22] ;
int arr_4 [22] [22] ;
short arr_5 [22] ;
unsigned int arr_6 [14] ;
short arr_7 [14] ;
_Bool arr_9 [14] [14] ;
_Bool arr_10 [14] ;
signed char arr_11 [14] [14] [14] ;
unsigned long long int arr_12 [14] ;
_Bool arr_13 [14] ;
unsigned long long int arr_14 [14] [14] [14] [14] [14] [14] [14] ;
unsigned int arr_15 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_17 [14] ;
signed char arr_21 [12] [12] ;
long long int arr_23 [12] ;
unsigned char arr_31 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-30580;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 10326422862115774792ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -560569933 : -1169872650;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-1205 : (short)22993;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 4096627021U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-13765;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 6482505015407066143ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1050059374811810682ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4048452994U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6410927048623153790ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 12820445895362760203ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -253243162641471779LL : 8542183121781118610LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)65;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
