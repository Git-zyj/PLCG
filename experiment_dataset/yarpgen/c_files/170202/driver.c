#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15178010035469328769ULL;
unsigned short var_1 = (unsigned short)8931;
signed char var_2 = (signed char)(-127 - 1);
int var_3 = 1029595224;
signed char var_4 = (signed char)119;
unsigned long long int var_5 = 8838762544800447980ULL;
unsigned char var_6 = (unsigned char)47;
unsigned int var_7 = 4016112332U;
int var_8 = 1992996100;
unsigned short var_9 = (unsigned short)45730;
unsigned short var_10 = (unsigned short)41839;
unsigned short var_11 = (unsigned short)13353;
unsigned short var_12 = (unsigned short)36397;
signed char var_13 = (signed char)-112;
int zero = 0;
long long int var_14 = -4710574541239509273LL;
unsigned long long int var_15 = 718845562409620626ULL;
signed char var_16 = (signed char)-30;
unsigned int var_17 = 445742388U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)35106;
unsigned int var_20 = 2549737130U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-22;
unsigned long long int var_23 = 1224789130160630324ULL;
unsigned short var_24 = (unsigned short)9215;
long long int var_25 = 1266118566159564568LL;
unsigned short var_26 = (unsigned short)3480;
unsigned long long int var_27 = 14268305747287913442ULL;
signed char var_28 = (signed char)111;
signed char var_29 = (signed char)11;
short var_30 = (short)22318;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)31750;
signed char var_35 = (signed char)84;
long long int var_36 = -985411002811242193LL;
long long int var_37 = 257527633960850605LL;
unsigned long long int var_38 = 8055907276276902404ULL;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)51704;
long long int var_41 = 6955829875995858725LL;
unsigned short var_42 = (unsigned short)48322;
long long int var_43 = 8434496266286150604LL;
int var_44 = 620789365;
unsigned long long int var_45 = 16230034725500558302ULL;
long long int var_46 = 1953219126616394309LL;
unsigned char var_47 = (unsigned char)87;
signed char var_48 = (signed char)43;
_Bool arr_0 [22] [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] ;
long long int arr_3 [22] [22] ;
long long int arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_7 [13] [13] ;
_Bool arr_12 [13] [13] [13] ;
unsigned long long int arr_13 [13] ;
_Bool arr_17 [13] [13] [13] [13] ;
long long int arr_19 [13] [13] ;
unsigned long long int arr_20 [13] [13] [13] ;
_Bool arr_23 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_29 [13] [13] [13] [13] ;
long long int arr_32 [13] [13] [13] [13] [13] ;
short arr_10 [13] ;
_Bool arr_22 [13] [13] [13] ;
int arr_35 [13] ;
long long int arr_39 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -2844957177968070789LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 200441677135643324LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)60150 : (unsigned short)33405;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 9931712085040224690ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 13229662414448709183ULL : 10897128932137710657ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 10574880643394191684ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -4501466406899201156LL : 5820244501534722640LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 13612282161235489937ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)63384;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -5665457710254981709LL : -6897043816954983850LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)1490 : (short)-4771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -1213808226 : 1799094525;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_39 [i_0] [i_1] = -962052551292406992LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
