#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8822744815839364856LL;
long long int var_1 = -359630306831226469LL;
long long int var_2 = -5012489774427768737LL;
long long int var_4 = -2405881331519952534LL;
long long int var_5 = -6508427146475506879LL;
long long int var_6 = 9202354135398361441LL;
long long int var_7 = -2686454212820444895LL;
unsigned short var_8 = (unsigned short)30166;
unsigned short var_9 = (unsigned short)45358;
long long int var_10 = 2869247582828589490LL;
long long int var_11 = -6957600912662988619LL;
long long int var_12 = -2712379431133462189LL;
long long int var_13 = 3365704719336655861LL;
long long int var_14 = -7266061491360887918LL;
int zero = 0;
long long int var_15 = -6794236554407403918LL;
unsigned short var_16 = (unsigned short)62392;
long long int var_17 = 660332455536779377LL;
long long int var_18 = -1220288587821010041LL;
unsigned short var_19 = (unsigned short)52114;
long long int var_20 = -1783856778610417594LL;
long long int var_21 = -7294736280369380672LL;
unsigned short var_22 = (unsigned short)32818;
long long int var_23 = -1106544083879762631LL;
long long int var_24 = 4984159491012029660LL;
unsigned short var_25 = (unsigned short)38448;
long long int var_26 = 8377931940355791390LL;
long long int var_27 = -7508199669792373089LL;
long long int var_28 = 5359137017056756456LL;
unsigned short var_29 = (unsigned short)32585;
long long int var_30 = -1288843256374231238LL;
long long int var_31 = 783742230300139357LL;
unsigned short var_32 = (unsigned short)42819;
unsigned short var_33 = (unsigned short)34717;
long long int var_34 = 8916973469426456421LL;
unsigned short var_35 = (unsigned short)5042;
unsigned short arr_0 [14] [14] ;
long long int arr_1 [14] [14] ;
long long int arr_2 [14] ;
unsigned short arr_3 [14] [14] ;
unsigned short arr_4 [14] ;
long long int arr_5 [14] ;
long long int arr_7 [14] [14] [14] [14] ;
unsigned short arr_8 [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned short arr_10 [14] [14] ;
unsigned short arr_12 [14] [14] [14] ;
long long int arr_13 [14] [14] [14] ;
long long int arr_14 [14] [14] [14] ;
long long int arr_15 [14] [14] [14] ;
long long int arr_16 [14] [14] [14] ;
unsigned short arr_29 [24] ;
long long int arr_30 [24] ;
long long int arr_11 [14] ;
long long int arr_21 [14] [14] ;
unsigned short arr_26 [10] ;
long long int arr_27 [10] ;
long long int arr_28 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31411;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 7349756516683341443LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -3975172041134246186LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)799;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12293 : (unsigned short)42402;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 3866385176999752754LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -7237819458205510967LL : -336271273382650963LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)64879;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -4735656161917439410LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)10261;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)43565 : (unsigned short)49309;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3852076777556320762LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2568701102510955884LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 5826489594001719211LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1178210256657717587LL : -3926723919518591977LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (unsigned short)59529;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = -4251492927450877229LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -2437009039599227860LL : 7105780659205252107LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 7440410409431971462LL : 6406614264647198864LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20658 : (unsigned short)3516;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 4048864911498863971LL : -8989170218243341323LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? -1245808255524723803LL : -6452945316123094470LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
