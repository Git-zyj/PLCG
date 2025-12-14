#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1575375926;
signed char var_2 = (signed char)71;
short var_3 = (short)-21107;
short var_4 = (short)-31948;
short var_5 = (short)28335;
unsigned long long int var_6 = 12696373752066858404ULL;
long long int var_7 = -238828210745328276LL;
unsigned long long int var_8 = 15277436398907683589ULL;
long long int var_9 = -3475970560646893323LL;
unsigned short var_10 = (unsigned short)34750;
long long int var_11 = 5739932727919740749LL;
short var_12 = (short)3237;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-6347;
int zero = 0;
unsigned long long int var_15 = 7864263949608160196ULL;
unsigned char var_16 = (unsigned char)18;
unsigned long long int var_17 = 8242241323231166409ULL;
unsigned char var_18 = (unsigned char)159;
short var_19 = (short)22057;
unsigned long long int var_20 = 16964787084930308202ULL;
unsigned int var_21 = 1773151196U;
short var_22 = (short)-28300;
signed char var_23 = (signed char)-70;
short var_24 = (short)-1621;
int var_25 = -1353377882;
long long int var_26 = 7489762942995614339LL;
int var_27 = -859115074;
long long int var_28 = -3643131636118059225LL;
short var_29 = (short)21034;
unsigned long long int var_30 = 3293096126343781780ULL;
unsigned long long int var_31 = 747012984073183898ULL;
short var_32 = (short)27822;
unsigned long long int var_33 = 1613901552731910068ULL;
unsigned long long int var_34 = 15439555942575875240ULL;
int var_35 = 1970511118;
unsigned long long int var_36 = 13588245140833616517ULL;
int var_37 = -343681855;
unsigned long long int var_38 = 11903546593176494243ULL;
long long int var_39 = 5852627922057055948LL;
short var_40 = (short)-28036;
unsigned char var_41 = (unsigned char)127;
short var_42 = (short)-27070;
long long int var_43 = 6897021701679298549LL;
unsigned long long int var_44 = 3818651815382350337ULL;
int var_45 = 1487692974;
short var_46 = (short)8628;
unsigned char var_47 = (unsigned char)132;
unsigned long long int var_48 = 12609665812543721532ULL;
unsigned long long int var_49 = 1860294343599017568ULL;
long long int var_50 = -2341033672926269878LL;
short var_51 = (short)-3024;
short var_52 = (short)30861;
long long int var_53 = -5450975264399178790LL;
unsigned char var_54 = (unsigned char)59;
short var_55 = (short)16266;
int arr_0 [20] [20] ;
short arr_1 [20] ;
unsigned short arr_3 [20] [20] ;
unsigned int arr_4 [20] [20] ;
unsigned char arr_5 [20] [20] [20] ;
long long int arr_7 [20] [20] [20] [20] ;
long long int arr_8 [20] [20] [20] ;
unsigned long long int arr_10 [14] ;
unsigned long long int arr_13 [14] ;
unsigned char arr_17 [14] [14] ;
unsigned char arr_19 [14] ;
unsigned long long int arr_22 [14] [14] [14] [14] ;
long long int arr_29 [24] ;
unsigned char arr_30 [24] ;
unsigned long long int arr_31 [24] [24] ;
int arr_32 [24] ;
short arr_33 [24] [24] [24] ;
int arr_34 [24] [24] [24] ;
unsigned long long int arr_37 [24] [24] [24] [24] [24] [24] ;
long long int arr_38 [24] [24] [24] [24] [24] ;
unsigned char arr_43 [24] [24] [24] [24] ;
short arr_47 [24] [24] ;
unsigned int arr_52 [24] ;
int arr_64 [23] [23] ;
unsigned char arr_9 [20] [20] [20] [20] ;
long long int arr_12 [14] ;
_Bool arr_15 [14] ;
signed char arr_28 [14] [14] [14] ;
int arr_44 [24] ;
unsigned short arr_53 [24] [24] ;
int arr_68 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -449858533 : 1674882797;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-10297 : (short)-1382;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56054;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 2551611669U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -7929913645932891137LL : -6685165860680798531LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -9072557648450160365LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 843217713779181369ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 15539734771948206159ULL : 13035214390806487860ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 701627684143560871ULL : 7275827804483080664ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 4012096948069418923LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = 15462516532587967463ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 1449280356;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)-10678;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1847562669 : -2021008070;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5050276513435368864ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = 5094454686226550483LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_47 [i_0] [i_1] = (short)-24094;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 3129852355U : 1717634832U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_64 [i_0] [i_1] = -1552606211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)82 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3849909453134453342LL : -1228427269897336156LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)47 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? -1088615969 : -2056029803;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_53 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)52535 : (unsigned short)47891;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_68 [i_0] [i_1] = 787246300;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_68 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
