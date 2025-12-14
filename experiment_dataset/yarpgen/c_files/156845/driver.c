#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10565;
unsigned long long int var_1 = 10860429243052493435ULL;
int var_2 = 1580534211;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3735705043U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-104;
int var_10 = 540418128;
int var_11 = -1781335477;
int zero = 0;
unsigned short var_12 = (unsigned short)59273;
unsigned short var_13 = (unsigned short)50724;
unsigned long long int var_14 = 8093786832667704615ULL;
int var_15 = -577708341;
short var_16 = (short)-12710;
int var_17 = -387328765;
short var_18 = (short)-27400;
short var_19 = (short)9134;
short var_20 = (short)-9205;
unsigned long long int var_21 = 8735413147003544915ULL;
unsigned long long int var_22 = 13810399330659398612ULL;
short var_23 = (short)-22047;
int var_24 = 1491243285;
short var_25 = (short)18774;
unsigned long long int var_26 = 5534217991565264920ULL;
unsigned char var_27 = (unsigned char)193;
int var_28 = 1083730445;
short var_29 = (short)-21242;
short var_30 = (short)19763;
signed char var_31 = (signed char)-3;
unsigned short var_32 = (unsigned short)14578;
long long int var_33 = -583526832333340736LL;
unsigned long long int var_34 = 15948530631451563716ULL;
unsigned char var_35 = (unsigned char)251;
short var_36 = (short)10146;
int arr_2 [10] ;
signed char arr_3 [10] ;
short arr_5 [10] ;
unsigned short arr_7 [10] ;
unsigned short arr_9 [10] [10] [10] ;
long long int arr_10 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_17 [19] [19] ;
unsigned long long int arr_18 [19] ;
int arr_19 [19] [19] [19] ;
signed char arr_21 [19] [19] [19] ;
unsigned int arr_22 [19] ;
unsigned long long int arr_23 [19] [19] [19] ;
_Bool arr_24 [19] ;
signed char arr_28 [13] [13] ;
short arr_29 [13] [13] ;
unsigned long long int arr_30 [13] [13] [13] ;
signed char arr_31 [13] ;
unsigned int arr_33 [13] [13] [13] ;
short arr_43 [13] ;
_Bool arr_48 [13] [13] [13] [13] ;
unsigned long long int arr_51 [13] [13] [13] ;
short arr_52 [13] [13] ;
unsigned short arr_55 [13] [13] [13] [13] [13] ;
unsigned long long int arr_8 [10] ;
unsigned short arr_25 [19] ;
unsigned int arr_38 [13] [13] [13] [13] ;
long long int arr_39 [13] ;
unsigned long long int arr_56 [13] [13] [13] [13] [13] [13] ;
signed char arr_60 [13] ;
short arr_61 [13] [13] [13] [13] [13] [13] ;
signed char arr_64 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -695273760;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-5235;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)1772;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)59980;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5612948145401156161LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 16852870980365093056ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 12085162812918616807ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 95237830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = 924062810U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 4628147974987208338ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = (short)20697;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 9268610710860100619ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2450684919U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (short)1046;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 5366155064278571539ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_52 [i_0] [i_1] = (short)6428;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)35394;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 12063845639787551309ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (unsigned short)38694;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 130674097U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = -1533374213255283703LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10283211689031871235ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_60 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-3150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_64 [i_0] [i_1] = (signed char)45;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
