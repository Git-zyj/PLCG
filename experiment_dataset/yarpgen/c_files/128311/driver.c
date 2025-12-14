#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1606741662;
long long int var_2 = 7702126737645531300LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3768312130U;
unsigned int var_5 = 3210138167U;
long long int var_9 = 6275779920013537299LL;
short var_11 = (short)9355;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 4135445051045571928ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)46922;
long long int var_17 = -7448220395102890560LL;
unsigned short var_18 = (unsigned short)13044;
unsigned int var_19 = 1285969459U;
unsigned long long int var_20 = 11862176906560214069ULL;
unsigned short var_21 = (unsigned short)51556;
short var_22 = (short)22371;
unsigned int var_23 = 1807919475U;
int var_24 = -1839010189;
unsigned short var_25 = (unsigned short)27819;
unsigned long long int var_26 = 7273740567820162808ULL;
unsigned short var_27 = (unsigned short)44276;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)8234;
long long int var_30 = -2575153339352358793LL;
_Bool var_31 = (_Bool)0;
long long int var_32 = -2318961573920443858LL;
int var_33 = 53360147;
short var_34 = (short)-18266;
unsigned char var_35 = (unsigned char)53;
unsigned short var_36 = (unsigned short)1518;
unsigned long long int var_37 = 10623385092682693046ULL;
long long int var_38 = 7214406049862873261LL;
short var_39 = (short)-15068;
_Bool var_40 = (_Bool)0;
unsigned long long int arr_0 [22] [22] ;
long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_3 [24] ;
signed char arr_4 [24] ;
signed char arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
int arr_7 [24] ;
unsigned int arr_9 [24] ;
unsigned char arr_10 [24] [24] ;
unsigned int arr_14 [20] [20] [20] ;
unsigned short arr_17 [20] [20] [20] [20] ;
unsigned int arr_19 [20] [20] [20] [20] [20] ;
unsigned char arr_30 [20] [20] [20] [20] ;
unsigned short arr_8 [24] [24] ;
long long int arr_11 [24] ;
long long int arr_28 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 9416176951609971722ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 7834474137636427204LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)32148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 8830967478880207698ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)57759;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -919545657;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 2333018477U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 4013098986U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62669;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 3265417117U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)47941;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 5549495274649258105LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 3213625400884546514LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
