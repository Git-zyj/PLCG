#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1279412557U;
unsigned char var_1 = (unsigned char)137;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)30702;
unsigned short var_6 = (unsigned short)17921;
signed char var_7 = (signed char)-15;
signed char var_8 = (signed char)-106;
short var_9 = (short)-7383;
int var_10 = -292935519;
unsigned char var_11 = (unsigned char)77;
int var_12 = -758138647;
short var_13 = (short)-4562;
unsigned int var_14 = 3990697347U;
unsigned long long int var_15 = 17097593862709071489ULL;
int var_16 = -75929807;
signed char var_17 = (signed char)127;
unsigned char var_18 = (unsigned char)35;
signed char var_19 = (signed char)-120;
int zero = 0;
unsigned char var_20 = (unsigned char)116;
unsigned char var_21 = (unsigned char)13;
unsigned char var_22 = (unsigned char)186;
unsigned int var_23 = 1358102782U;
int var_24 = 2004812997;
short var_25 = (short)-19125;
signed char var_26 = (signed char)-119;
unsigned char var_27 = (unsigned char)164;
unsigned short var_28 = (unsigned short)24858;
unsigned char var_29 = (unsigned char)143;
long long int var_30 = 510333610536347667LL;
unsigned short var_31 = (unsigned short)42425;
long long int var_32 = 4700257102156108537LL;
long long int var_33 = -5488272365597722622LL;
unsigned long long int var_34 = 15134202277805890508ULL;
unsigned char var_35 = (unsigned char)216;
int var_36 = -979047603;
long long int var_37 = 8285238603881994431LL;
unsigned char var_38 = (unsigned char)231;
signed char arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
int arr_7 [19] ;
_Bool arr_8 [19] ;
int arr_10 [20] [20] ;
short arr_13 [10] ;
_Bool arr_17 [10] ;
unsigned short arr_24 [10] [10] [10] [10] ;
unsigned long long int arr_25 [10] [10] [10] [10] ;
unsigned long long int arr_30 [10] [10] ;
unsigned long long int arr_37 [10] ;
_Bool arr_4 [24] ;
long long int arr_5 [24] ;
unsigned int arr_9 [19] ;
int arr_14 [10] ;
unsigned long long int arr_31 [10] [10] [10] [10] ;
unsigned int arr_32 [10] ;
long long int arr_33 [10] [10] [10] [10] ;
unsigned char arr_38 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2697727522900882901ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 581430992;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 962784199;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)-22042;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)19182 : (unsigned short)43561;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 7876534086751896079ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = 14982245268442039457ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 1918920907132113593ULL : 1999127407564501983ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4159707882312583935LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 783642208U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -309202844;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 4887631682263010608ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = 3528486810U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = -8963937218865728260LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)63;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
