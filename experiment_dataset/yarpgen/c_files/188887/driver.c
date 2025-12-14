#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4170119599513309917LL;
long long int var_1 = 3951627624713602669LL;
long long int var_2 = -4865996843418661984LL;
short var_3 = (short)-5369;
unsigned long long int var_4 = 12830763824698469851ULL;
unsigned char var_5 = (unsigned char)17;
long long int var_6 = -7474818127844724761LL;
unsigned long long int var_7 = 7366416392190684788ULL;
unsigned long long int var_8 = 13717489806745105815ULL;
short var_9 = (short)-13388;
long long int var_10 = 1630163544509849707LL;
long long int var_11 = -2817461950559876208LL;
int zero = 0;
unsigned long long int var_12 = 17579116360121337285ULL;
long long int var_13 = -8733150673369254987LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6421499848586335004LL;
long long int var_16 = -3722511662029689137LL;
unsigned char var_17 = (unsigned char)105;
long long int var_18 = -810185134689760717LL;
int var_19 = -337383769;
unsigned long long int var_20 = 12549017983181230803ULL;
unsigned char var_21 = (unsigned char)254;
long long int var_22 = -334914639724615680LL;
unsigned long long int var_23 = 18109307188118353864ULL;
unsigned char var_24 = (unsigned char)86;
unsigned char var_25 = (unsigned char)75;
long long int var_26 = -3674607549116301615LL;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] ;
long long int arr_2 [20] ;
int arr_4 [20] ;
long long int arr_5 [20] [20] [20] ;
long long int arr_6 [20] ;
unsigned long long int arr_7 [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned short arr_11 [20] [20] [20] ;
long long int arr_13 [20] [20] [20] ;
long long int arr_14 [20] ;
_Bool arr_15 [20] [20] [20] [20] ;
unsigned long long int arr_16 [20] [20] ;
int arr_17 [20] [20] ;
long long int arr_18 [20] [20] [20] [20] [20] ;
long long int arr_23 [20] ;
int arr_24 [20] [20] ;
int arr_25 [20] [20] [20] ;
long long int arr_26 [20] ;
long long int arr_30 [13] ;
int arr_3 [20] ;
unsigned char arr_8 [20] [20] ;
int arr_19 [20] [20] [20] [20] [20] ;
int arr_20 [20] [20] [20] ;
unsigned long long int arr_21 [20] [20] [20] ;
unsigned long long int arr_27 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4377606967636679437ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5659104151470292401LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -4481084897535333257LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -450485507;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4281541757189535516LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 6807948902261871601LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 4032927951857383684ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 17139953486105395850ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)48822;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -2456454586945031649LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -4752322575359906341LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 10989407791506532944ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 210715080;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -4942301121253755824LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = -1315571970215408925LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = -730715862;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -1749136792;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = -4036020478068119662LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = 586326650794568474LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1956373475;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -1227204871;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 781628038;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 17893589445377057604ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 11702617351713605367ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
