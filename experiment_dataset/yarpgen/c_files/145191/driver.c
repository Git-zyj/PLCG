#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4766947958961220190ULL;
int var_5 = 615350739;
unsigned int var_8 = 2078235256U;
int var_9 = 1526162492;
short var_10 = (short)21393;
unsigned int var_13 = 4232135164U;
int var_14 = 1738054165;
long long int var_16 = 8499898823851631890LL;
int zero = 0;
int var_17 = 84855284;
unsigned short var_18 = (unsigned short)3691;
signed char var_19 = (signed char)-118;
unsigned long long int var_20 = 17054884441812216916ULL;
unsigned long long int var_21 = 15412352300746142383ULL;
unsigned int var_22 = 3133482027U;
unsigned long long int var_23 = 3850662639837763776ULL;
int var_24 = -1940285662;
signed char var_25 = (signed char)83;
int var_26 = -1056245398;
unsigned int var_27 = 1045023128U;
unsigned short var_28 = (unsigned short)38990;
short var_29 = (short)-32236;
unsigned int var_30 = 1655418351U;
unsigned int var_31 = 1144720769U;
short var_32 = (short)6386;
int arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned short arr_2 [15] ;
long long int arr_3 [15] ;
unsigned long long int arr_5 [14] ;
short arr_14 [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] ;
unsigned int arr_16 [20] ;
unsigned int arr_18 [20] [20] [20] ;
unsigned int arr_20 [20] [20] [20] [20] [20] ;
int arr_4 [15] ;
short arr_11 [14] [14] ;
unsigned int arr_12 [14] ;
short arr_26 [20] [20] [20] [20] [20] ;
unsigned int arr_27 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -2047795112 : 706480844;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3776032517128632716LL : -62259536498091806LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)1286;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -7137459971313813921LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1208786799236492757ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (short)15153;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 17051058686951892039ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 4091362340U : 743688875U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 469719144U : 3709641374U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2838697048U : 416256307U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -484240428;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-14111 : (short)1602;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 185206687U : 2535980170U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)18166 : (short)11809;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = 1136651653U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
