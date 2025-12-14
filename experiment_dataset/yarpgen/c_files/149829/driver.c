#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1689920154;
long long int var_1 = -7547077779974876073LL;
unsigned int var_2 = 3733721032U;
unsigned short var_4 = (unsigned short)13178;
unsigned char var_5 = (unsigned char)128;
unsigned long long int var_7 = 13036260293720537945ULL;
signed char var_8 = (signed char)97;
unsigned char var_9 = (unsigned char)129;
long long int var_10 = 3341591521175682326LL;
long long int var_11 = -3337761551295079416LL;
unsigned char var_12 = (unsigned char)198;
int zero = 0;
unsigned char var_13 = (unsigned char)34;
unsigned char var_14 = (unsigned char)59;
unsigned int var_15 = 1709547605U;
long long int var_16 = -4580180177169748757LL;
int var_17 = -479183965;
long long int var_18 = -2177681615030575726LL;
signed char var_19 = (signed char)-27;
unsigned int var_20 = 326472092U;
signed char var_21 = (signed char)-71;
int var_22 = 1205756413;
unsigned int var_23 = 1490435467U;
short var_24 = (short)-27282;
unsigned long long int var_25 = 15022901185151211626ULL;
short var_26 = (short)-29092;
signed char var_27 = (signed char)75;
unsigned short var_28 = (unsigned short)8531;
unsigned short arr_2 [21] ;
unsigned int arr_5 [21] [21] ;
int arr_6 [21] ;
unsigned char arr_8 [21] [21] [21] ;
signed char arr_9 [21] [21] [21] [21] ;
unsigned int arr_10 [21] [21] [21] [21] [21] ;
int arr_13 [21] [21] [21] [21] ;
unsigned short arr_16 [21] [21] [21] [21] ;
short arr_21 [11] ;
short arr_24 [11] ;
unsigned long long int arr_26 [11] ;
unsigned long long int arr_39 [25] [25] ;
long long int arr_41 [25] ;
long long int arr_42 [25] [25] ;
unsigned int arr_44 [25] [25] ;
long long int arr_45 [25] [25] [25] ;
signed char arr_4 [21] ;
unsigned long long int arr_18 [21] [21] [21] [21] [21] ;
int arr_19 [21] [21] [21] [21] ;
long long int arr_22 [11] ;
signed char arr_34 [11] [11] [11] [11] ;
signed char arr_37 [11] [11] ;
unsigned int arr_38 [11] ;
unsigned char arr_46 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)10105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3861903355U : 3482826540U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1954943958;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 2553790200U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1977930527;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)5988;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (short)-10970;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (short)19368;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = 2825484763605838899ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = 3454229652999697354ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = -6330020948886383255LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = -6253915909384520215LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = 521193054U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 8127543872381297279LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1749928888316342715ULL : 3141843898261299823ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2416717 : -918586278;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = -6793807892823362991LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = 2131186707U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_46 [i_0] = (unsigned char)150;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
