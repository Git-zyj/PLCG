#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5006308144851948560ULL;
unsigned int var_2 = 458659626U;
signed char var_3 = (signed char)-82;
long long int var_4 = -9103638612011584724LL;
unsigned int var_5 = 1752929140U;
int var_7 = 1793844726;
short var_8 = (short)-689;
unsigned char var_9 = (unsigned char)104;
unsigned char var_10 = (unsigned char)170;
long long int var_11 = -7941887126545077168LL;
unsigned int var_12 = 3053718438U;
int zero = 0;
int var_14 = 720167178;
unsigned short var_15 = (unsigned short)17270;
short var_16 = (short)-10839;
unsigned char var_17 = (unsigned char)165;
unsigned char var_18 = (unsigned char)146;
int var_19 = 1409087813;
short var_20 = (short)28210;
unsigned int var_21 = 6399062U;
unsigned long long int var_22 = 3139123049269152085ULL;
unsigned short var_23 = (unsigned short)4322;
signed char var_24 = (signed char)-86;
unsigned int var_25 = 808925325U;
unsigned int var_26 = 926546116U;
long long int var_27 = 570376284829128132LL;
signed char var_28 = (signed char)3;
long long int var_29 = 2014895810162207084LL;
long long int var_30 = 7532537524527862030LL;
short var_31 = (short)14080;
unsigned char var_32 = (unsigned char)120;
unsigned long long int var_33 = 6342998014909747360ULL;
unsigned int var_34 = 2240322393U;
unsigned int var_35 = 1988790289U;
signed char var_36 = (signed char)-62;
unsigned char arr_0 [14] [14] ;
int arr_2 [14] ;
unsigned long long int arr_4 [14] ;
long long int arr_5 [14] [14] [14] ;
int arr_11 [14] [14] [14] [14] ;
short arr_14 [14] [14] [14] [14] [14] ;
unsigned char arr_15 [14] [14] [14] [14] [14] ;
unsigned int arr_18 [14] [14] [14] ;
int arr_20 [22] ;
_Bool arr_21 [22] [22] ;
unsigned char arr_22 [22] ;
signed char arr_23 [22] ;
unsigned long long int arr_31 [23] ;
unsigned long long int arr_32 [23] ;
unsigned int arr_33 [23] ;
short arr_34 [23] ;
unsigned long long int arr_36 [17] ;
unsigned short arr_12 [14] [14] [14] [14] ;
unsigned char arr_26 [15] ;
unsigned int arr_27 [15] [15] ;
short arr_30 [18] ;
unsigned long long int arr_37 [17] ;
signed char arr_38 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1896051321 : -966752235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 5148971336315223506ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 326933129233927616LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1873984381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-9366;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1172017082U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -175414375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 15514206370003230417ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = 15819737260739052234ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = 1388044503U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = (short)26478;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = 1831697982507518962ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)45272 : (unsigned short)25175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = 1048253463U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (short)-26798;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_37 [i_0] = 8984634257856909816ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)-31;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
