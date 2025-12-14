#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)117;
int var_2 = -606862656;
unsigned int var_3 = 366812853U;
int var_4 = -334274586;
unsigned char var_8 = (unsigned char)209;
long long int var_9 = 6980199802052972365LL;
unsigned short var_12 = (unsigned short)20217;
long long int var_13 = 4771660919683073094LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8913525570440088569LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)60418;
long long int var_22 = -6283089372318868112LL;
unsigned short var_23 = (unsigned short)45809;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 10994779126454267126ULL;
short var_26 = (short)21485;
short var_27 = (short)-11578;
long long int var_28 = -3941118420385590392LL;
unsigned long long int var_29 = 1209887173394772281ULL;
unsigned short var_30 = (unsigned short)20722;
unsigned short var_31 = (unsigned short)24374;
unsigned int var_32 = 4220927860U;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)169;
unsigned long long int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned int arr_2 [24] [24] [24] ;
int arr_3 [24] ;
unsigned short arr_7 [15] ;
unsigned char arr_9 [15] ;
unsigned int arr_10 [15] ;
int arr_11 [15] ;
unsigned short arr_21 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_4 [24] [24] ;
_Bool arr_15 [15] ;
unsigned long long int arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 16237783463243057949ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 12959012384587554548ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2007071437U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1283069161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)62635;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2459672615U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 565344422;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)6603;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1944919353U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 10983030254405464124ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
