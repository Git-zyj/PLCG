#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16778297807103007510ULL;
unsigned short var_5 = (unsigned short)47967;
unsigned short var_6 = (unsigned short)37610;
unsigned int var_8 = 2218549083U;
signed char var_9 = (signed char)32;
unsigned char var_10 = (unsigned char)67;
unsigned int var_11 = 2963905597U;
int zero = 0;
long long int var_12 = -7197612960353545276LL;
unsigned int var_13 = 1198301655U;
long long int var_14 = 6442144576377855170LL;
signed char var_15 = (signed char)92;
unsigned int var_16 = 1168595629U;
unsigned short var_17 = (unsigned short)22287;
unsigned short var_18 = (unsigned short)14023;
unsigned char var_19 = (unsigned char)4;
unsigned int var_20 = 1061341501U;
unsigned long long int var_21 = 9779766023869041095ULL;
unsigned int var_22 = 2161796456U;
long long int var_23 = -4841102737168349947LL;
unsigned int var_24 = 1779456547U;
unsigned long long int var_25 = 14663317451999291739ULL;
unsigned int var_26 = 1391057163U;
unsigned int var_27 = 162137987U;
unsigned short var_28 = (unsigned short)19525;
unsigned short var_29 = (unsigned short)12550;
unsigned int var_30 = 1321502280U;
unsigned short var_31 = (unsigned short)63335;
unsigned short var_32 = (unsigned short)34696;
unsigned int var_33 = 4075820852U;
int var_34 = 403079801;
unsigned int var_35 = 3297116413U;
unsigned int var_36 = 3290464500U;
long long int var_37 = -599007143074552448LL;
unsigned short arr_0 [17] [17] ;
signed char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] ;
long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
long long int arr_5 [21] ;
long long int arr_7 [12] [12] ;
int arr_9 [12] [12] ;
long long int arr_11 [15] ;
unsigned int arr_12 [22] ;
unsigned short arr_13 [22] ;
unsigned int arr_19 [25] ;
signed char arr_21 [25] [25] [25] ;
int arr_22 [25] [25] ;
unsigned long long int arr_23 [25] ;
int arr_24 [25] [25] [25] ;
unsigned char arr_26 [25] [25] [25] [25] ;
long long int arr_27 [25] [25] [25] [25] ;
unsigned int arr_31 [25] [25] [25] [25] ;
int arr_33 [25] [25] [25] ;
long long int arr_35 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_39 [25] [25] [25] ;
signed char arr_6 [21] ;
int arr_14 [22] ;
unsigned short arr_17 [15] ;
long long int arr_37 [25] ;
int arr_38 [25] ;
unsigned short arr_41 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)36177;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 15610100552108699966ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3904819545382984230LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1360437943272444340ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -4968071699819732722LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 3805932786902761933LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 819088840;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 3122938737183449299LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 372879191U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned short)17666;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 799251208U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = 280069360;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 10326134857015169907ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -122620095;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 1257341553474236626LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 772374910U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 1749486197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8533114961209876677LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (unsigned short)52002;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -1878172083;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)20788;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = -2824464202599241728LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = 908563450;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (unsigned short)49036;
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
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
