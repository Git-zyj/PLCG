#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -693144046;
unsigned short var_1 = (unsigned short)44688;
unsigned int var_2 = 3536385959U;
unsigned int var_3 = 583066674U;
unsigned long long int var_4 = 7789466674088502595ULL;
long long int var_5 = -6574918072623279826LL;
unsigned short var_6 = (unsigned short)44148;
unsigned int var_7 = 70521280U;
unsigned int var_8 = 2293957592U;
unsigned int var_9 = 535467080U;
int zero = 0;
int var_10 = 249481071;
long long int var_11 = -7861426562003094821LL;
long long int var_12 = -3247919263219473044LL;
signed char var_13 = (signed char)-82;
unsigned char var_14 = (unsigned char)73;
int var_15 = 1160536879;
unsigned short var_16 = (unsigned short)4291;
unsigned short var_17 = (unsigned short)54867;
signed char var_18 = (signed char)-14;
unsigned long long int var_19 = 544922666490626678ULL;
unsigned int var_20 = 1791436750U;
unsigned char var_21 = (unsigned char)198;
long long int var_22 = -5379705637451236765LL;
unsigned short var_23 = (unsigned short)43104;
unsigned long long int var_24 = 7279050546697246107ULL;
long long int var_25 = -4378126728138575010LL;
unsigned long long int var_26 = 8962214720835337214ULL;
int var_27 = 208311273;
int var_28 = -42531559;
unsigned int var_29 = 3180568294U;
signed char var_30 = (signed char)-72;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)100;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)59341;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)-28;
short var_37 = (short)-30518;
long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
signed char arr_2 [10] ;
long long int arr_3 [10] ;
short arr_5 [10] ;
unsigned short arr_7 [10] [10] ;
signed char arr_8 [10] [10] [10] ;
long long int arr_9 [10] [10] [10] ;
int arr_10 [10] ;
unsigned char arr_12 [10] ;
_Bool arr_13 [10] [10] [10] ;
unsigned char arr_14 [10] [10] [10] [10] ;
long long int arr_15 [10] [10] [10] [10] ;
unsigned long long int arr_16 [10] ;
signed char arr_19 [10] [10] ;
unsigned int arr_22 [10] [10] [10] ;
signed char arr_23 [10] [10] [10] [10] ;
unsigned int arr_24 [10] ;
unsigned int arr_27 [10] [10] [10] [10] [10] [10] ;
int arr_28 [10] [10] [10] [10] [10] ;
unsigned char arr_31 [10] [10] [10] [10] ;
signed char arr_37 [10] [10] [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] ;
long long int arr_18 [10] [10] [10] ;
int arr_29 [10] ;
_Bool arr_40 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -2983248590222252029LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1928715214U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 7260754975118028311LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)20692;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)29666;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -2653567008632986400LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -1561921552;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -389204459355678053LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 7263363783101791613ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1001694289U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 3773339198U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3497048457U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -1194013739;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 9537362722863342744ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 4587513976524309039ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -7029144680479957147LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -346758928 : 1663797565;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
