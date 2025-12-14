#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2142471492609444871LL;
long long int var_2 = 8251845795495457062LL;
unsigned long long int var_3 = 6323921230726496647ULL;
unsigned long long int var_4 = 14313480559580767999ULL;
unsigned short var_5 = (unsigned short)56328;
long long int var_6 = -2831916071412742793LL;
int var_8 = -1292943407;
int var_9 = -452742337;
long long int var_11 = 8961800268747021263LL;
unsigned char var_13 = (unsigned char)81;
short var_14 = (short)6357;
unsigned int var_15 = 486513307U;
unsigned short var_16 = (unsigned short)48259;
int zero = 0;
signed char var_18 = (signed char)-25;
unsigned long long int var_19 = 5535293105504740023ULL;
long long int var_20 = 611275688542106174LL;
signed char var_21 = (signed char)29;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)43749;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)220;
unsigned long long int var_27 = 12549415812392755639ULL;
long long int var_28 = -3075885233500000715LL;
signed char var_29 = (signed char)-1;
unsigned short var_30 = (unsigned short)1354;
unsigned int var_31 = 4011990662U;
unsigned int var_32 = 3936269673U;
unsigned short var_33 = (unsigned short)45929;
unsigned char var_34 = (unsigned char)221;
int var_35 = 327803696;
unsigned int var_36 = 929200695U;
unsigned long long int var_37 = 12139212156617904245ULL;
unsigned int var_38 = 2714029773U;
long long int var_39 = 2873209064498654991LL;
long long int var_40 = -8082142350276985691LL;
unsigned int var_41 = 379407007U;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_2 [16] ;
int arr_5 [16] ;
long long int arr_6 [16] [16] ;
unsigned long long int arr_7 [16] ;
unsigned short arr_9 [16] [16] [16] ;
long long int arr_10 [16] [16] [16] ;
unsigned short arr_11 [16] [16] ;
long long int arr_12 [16] [16] ;
short arr_13 [16] [16] [16] [16] ;
long long int arr_16 [16] [16] ;
signed char arr_17 [16] [16] [16] ;
long long int arr_18 [16] ;
signed char arr_20 [16] [16] [16] [16] ;
_Bool arr_22 [16] [16] [16] [16] [16] [16] ;
long long int arr_23 [16] [16] ;
long long int arr_24 [16] [16] [16] [16] [16] [16] [16] ;
unsigned short arr_29 [16] ;
unsigned long long int arr_34 [14] [14] ;
long long int arr_35 [14] ;
short arr_38 [14] ;
_Bool arr_40 [14] [14] ;
long long int arr_44 [17] ;
unsigned int arr_45 [17] ;
long long int arr_48 [17] ;
long long int arr_51 [17] [17] [17] [17] ;
short arr_52 [17] ;
long long int arr_53 [17] [17] [17] ;
long long int arr_3 [16] ;
unsigned char arr_8 [16] [16] ;
unsigned long long int arr_14 [16] [16] [16] [16] ;
signed char arr_26 [16] [16] ;
unsigned int arr_27 [16] [16] [16] [16] ;
unsigned short arr_28 [16] [16] ;
unsigned char arr_43 [14] [14] ;
int arr_46 [17] [17] ;
long long int arr_47 [17] ;
signed char arr_55 [17] [17] [17] [17] [17] ;
long long int arr_56 [17] [17] [17] [17] [17] ;
unsigned char arr_57 [17] [17] [17] [17] ;
signed char arr_62 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 10324322898671669301ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1924306516061925258LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1105366365;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -6118274650035088650LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 12036333600659853429ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)26495;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -7749968231024827540LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22675 : (unsigned short)62918;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = -6535075724043658503LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-30822;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = -5902846536404080453LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 8671964738380057309LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = -7932737071859661706LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -657009563446941044LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (unsigned short)25356;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = 14247601193767284161ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = -490886297328349368LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (short)-30445 : (short)23861;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_44 [i_0] = 3662343501687443944LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 2253908634U : 2747351572U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 5614196104971666109LL : 2585955834007296129LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 8283926147928594443LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_52 [i_0] = (short)-25353;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 4414136562663763523LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -5204695401201298584LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 10585702993426321811ULL : 18400354443700717678ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1905953375U : 1805347689U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)44275;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)111 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? 2082452956 : -527061148;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? -8431187114345446808LL : -7087393215493433303LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)108 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 9026299123923222687LL : 9012840541489655703LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_62 [i_0] = (signed char)-26;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_62 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
