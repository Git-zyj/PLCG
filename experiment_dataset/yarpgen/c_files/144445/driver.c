#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
long long int var_1 = 1913263104506407187LL;
short var_2 = (short)-4707;
signed char var_5 = (signed char)-112;
int var_9 = -1257899778;
unsigned short var_10 = (unsigned short)57351;
unsigned int var_11 = 2987328380U;
unsigned char var_12 = (unsigned char)0;
short var_13 = (short)4928;
unsigned long long int var_14 = 13574828391912002190ULL;
unsigned short var_15 = (unsigned short)43580;
unsigned short var_16 = (unsigned short)2305;
unsigned long long int var_17 = 916521647805452455ULL;
int zero = 0;
short var_18 = (short)30826;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)57300;
unsigned long long int var_21 = 17612247278572276846ULL;
unsigned long long int var_22 = 4218532566384606746ULL;
unsigned char var_23 = (unsigned char)45;
unsigned short var_24 = (unsigned short)10104;
unsigned char var_25 = (unsigned char)247;
int var_26 = 779312487;
int var_27 = 1259080242;
int var_28 = 1397178977;
unsigned long long int var_29 = 12561448730612029696ULL;
int var_30 = -693610382;
unsigned int var_31 = 3200016857U;
signed char var_32 = (signed char)-124;
short var_33 = (short)-10426;
unsigned char var_34 = (unsigned char)35;
short var_35 = (short)-22953;
unsigned short var_36 = (unsigned short)18858;
unsigned long long int var_37 = 8274728187329141694ULL;
short var_38 = (short)11332;
long long int var_39 = -1250381574543343204LL;
unsigned short var_40 = (unsigned short)42487;
_Bool var_41 = (_Bool)1;
short var_42 = (short)-28451;
unsigned short var_43 = (unsigned short)51432;
unsigned long long int var_44 = 2026026569374913682ULL;
short arr_1 [11] [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
unsigned long long int arr_4 [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
long long int arr_6 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] ;
unsigned char arr_15 [11] ;
unsigned long long int arr_17 [11] [11] ;
int arr_23 [11] [11] [11] [11] ;
short arr_26 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_28 [11] [11] [11] [11] [11] [11] [11] ;
short arr_29 [11] [11] [11] [11] [11] [11] ;
short arr_31 [11] [11] ;
int arr_38 [12] ;
unsigned char arr_41 [25] ;
unsigned short arr_42 [25] ;
unsigned long long int arr_48 [25] [25] [25] [25] ;
unsigned short arr_50 [25] [25] [25] [25] [25] [25] ;
long long int arr_51 [25] [25] [25] ;
unsigned short arr_8 [11] ;
unsigned short arr_13 [11] ;
unsigned char arr_25 [11] [11] [11] [11] ;
long long int arr_32 [11] ;
unsigned long long int arr_36 [11] ;
unsigned char arr_40 [12] [12] ;
short arr_52 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_58 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29538;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 816420675796574516ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1222069440956600797ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 17879567645349483601ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7346252417154640729LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 14979917635491895997ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 10338319855617038737ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 44228748;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)20913;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)41575;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-8308;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_31 [i_0] [i_1] = (short)-32204;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = 538889793;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = (unsigned short)57055;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 9236126963928449144ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)9328;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 335566428247442637LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)54236;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46124 : (unsigned short)59257;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = 2087861027959969710LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = 17232396669307642207ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)193 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)21794;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_58 [i_0] = (unsigned char)100;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_58 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
