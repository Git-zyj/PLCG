#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-566;
long long int var_2 = -4503307803344981880LL;
long long int var_3 = -6009447933605635679LL;
unsigned char var_4 = (unsigned char)215;
unsigned char var_5 = (unsigned char)236;
long long int var_6 = -2207471651567674168LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)33;
short var_9 = (short)15826;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1665559681164176455LL;
unsigned char var_12 = (unsigned char)223;
unsigned char var_13 = (unsigned char)245;
int zero = 0;
short var_14 = (short)-28520;
short var_15 = (short)23886;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3353;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4275041130028115322LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -195044557176504590LL;
unsigned char var_22 = (unsigned char)56;
long long int var_23 = 3609147577865335396LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
short var_26 = (short)20727;
short arr_0 [15] [15] ;
unsigned char arr_2 [15] ;
short arr_4 [15] [15] [15] ;
short arr_6 [15] [15] ;
_Bool arr_7 [15] [15] [15] ;
long long int arr_8 [15] [15] [15] [15] ;
unsigned char arr_9 [15] [15] [15] [15] ;
_Bool arr_10 [15] [15] ;
short arr_11 [15] [15] [15] [15] ;
_Bool arr_16 [15] [15] ;
long long int arr_17 [15] [15] [15] ;
unsigned char arr_22 [16] ;
short arr_23 [16] ;
unsigned char arr_24 [16] [16] ;
short arr_25 [16] ;
unsigned char arr_29 [12] [12] ;
_Bool arr_39 [11] [11] ;
short arr_50 [11] [11] ;
short arr_5 [15] [15] [15] ;
_Bool arr_12 [15] ;
unsigned char arr_13 [15] [15] [15] [15] ;
_Bool arr_14 [15] ;
short arr_15 [15] [15] ;
_Bool arr_18 [15] [15] [15] ;
unsigned char arr_19 [15] [15] [15] ;
short arr_20 [15] ;
long long int arr_21 [15] ;
short arr_26 [16] [16] ;
long long int arr_34 [12] [12] ;
unsigned char arr_35 [12] [12] [12] [12] ;
long long int arr_36 [12] ;
short arr_37 [12] ;
long long int arr_40 [11] ;
short arr_41 [11] ;
_Bool arr_44 [11] ;
_Bool arr_45 [11] [11] ;
unsigned char arr_52 [11] [11] [11] ;
short arr_53 [11] ;
short arr_56 [11] [11] ;
long long int arr_57 [11] [11] [11] ;
long long int arr_58 [11] [11] [11] ;
short arr_61 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-29478;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)5506;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 4713444281284854976LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)18731;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -3096651840089124339LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)-31115 : (short)7354;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (short)-32727;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_39 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = (short)-13641;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-23445;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)18191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (short)-6926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -2814878612506999860LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16017 : (short)26883;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_34 [i_0] [i_1] = 9027524974803372401LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = 9175758686046950333LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (short)-3197;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_40 [i_0] = 8115646596738789087LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_41 [i_0] = (short)19470;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_45 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_53 [i_0] = (short)31399;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_56 [i_0] [i_1] = (short)-13026;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -2393109891544531462LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = 7932245410495893607LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? (short)-28084 : (short)-15077;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_61 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
