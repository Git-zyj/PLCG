#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1209883552791772123LL;
unsigned short var_1 = (unsigned short)56448;
int var_2 = -218289162;
signed char var_3 = (signed char)-1;
unsigned long long int var_4 = 4837049952674169623ULL;
signed char var_5 = (signed char)100;
int var_7 = 171863487;
signed char var_8 = (signed char)-60;
unsigned short var_9 = (unsigned short)55263;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)32;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-116;
long long int var_15 = 7007010760047460034LL;
unsigned long long int var_16 = 13122998864869823198ULL;
signed char var_17 = (signed char)84;
unsigned long long int var_18 = 12309669264285986820ULL;
int var_19 = -603620352;
unsigned int var_20 = 3875288262U;
unsigned short var_21 = (unsigned short)49501;
unsigned short var_22 = (unsigned short)26717;
unsigned long long int var_23 = 3655436832261421179ULL;
unsigned short var_24 = (unsigned short)56783;
unsigned long long int var_25 = 11895590689993104686ULL;
_Bool var_26 = (_Bool)0;
long long int var_27 = 2865175579645766807LL;
unsigned char var_28 = (unsigned char)242;
unsigned long long int var_29 = 13022484219918454173ULL;
unsigned char var_30 = (unsigned char)72;
unsigned int var_31 = 1350296437U;
unsigned long long int var_32 = 10897676204256152479ULL;
unsigned char var_33 = (unsigned char)53;
unsigned short var_34 = (unsigned short)9708;
unsigned long long int var_35 = 13137534627495516385ULL;
unsigned short var_36 = (unsigned short)59903;
int var_37 = -1888996006;
unsigned int var_38 = 1891601743U;
unsigned char var_39 = (unsigned char)81;
unsigned int var_40 = 1201447992U;
unsigned char var_41 = (unsigned char)40;
int var_42 = 426822952;
unsigned long long int var_43 = 5000314998063478517ULL;
unsigned long long int var_44 = 2018720301676853374ULL;
unsigned long long int var_45 = 523354408255111126ULL;
_Bool var_46 = (_Bool)1;
unsigned long long int var_47 = 12696939854219567386ULL;
int var_48 = 1766970200;
unsigned short var_49 = (unsigned short)11022;
unsigned long long int arr_0 [13] [13] ;
int arr_1 [13] ;
unsigned short arr_2 [13] [13] [13] ;
unsigned short arr_3 [13] [13] [13] ;
int arr_4 [13] [13] [13] ;
signed char arr_5 [13] [13] [13] ;
long long int arr_7 [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_13 [13] ;
long long int arr_15 [13] [13] [13] [13] ;
unsigned char arr_17 [13] [13] [13] [13] ;
signed char arr_19 [13] [13] ;
unsigned long long int arr_20 [13] [13] [13] [13] [13] [13] ;
short arr_27 [13] ;
unsigned char arr_28 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 10986905641685558154ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -641340780;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)8858;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)34421;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1780195871;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6847069312462149787LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -5754211238266995629LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11251829301640931919ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (short)-12188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)143;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
