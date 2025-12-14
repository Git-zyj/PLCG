#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 547653652U;
unsigned char var_1 = (unsigned char)212;
unsigned char var_2 = (unsigned char)45;
signed char var_3 = (signed char)87;
unsigned char var_4 = (unsigned char)16;
unsigned long long int var_5 = 7749077271335866995ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2316012482U;
unsigned char var_9 = (unsigned char)188;
unsigned char var_10 = (unsigned char)101;
long long int var_11 = 2293746712346199864LL;
unsigned char var_12 = (unsigned char)142;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2282793617U;
unsigned char var_15 = (unsigned char)139;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-9;
long long int var_18 = 1803140737178962723LL;
unsigned int var_19 = 1412201710U;
unsigned long long int var_20 = 18436243472298372519ULL;
int var_21 = -1590497732;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-21;
int var_24 = 1896716992;
signed char var_25 = (signed char)-18;
signed char var_26 = (signed char)37;
_Bool var_27 = (_Bool)1;
short var_28 = (short)17081;
_Bool var_29 = (_Bool)1;
int var_30 = -1052874612;
int var_31 = 78758598;
unsigned long long int var_32 = 10082021627755953851ULL;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)199;
unsigned char arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned int arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
_Bool arr_5 [20] [20] ;
unsigned int arr_7 [20] ;
unsigned int arr_11 [20] ;
unsigned char arr_15 [11] [11] ;
signed char arr_17 [11] ;
unsigned short arr_20 [11] [11] [11] ;
long long int arr_21 [11] [11] ;
int arr_23 [11] ;
unsigned long long int arr_24 [11] ;
_Bool arr_27 [11] [11] [11] ;
unsigned int arr_30 [11] [11] [11] [11] ;
signed char arr_45 [11] [11] [11] [11] ;
int arr_47 [11] ;
short arr_2 [19] ;
unsigned short arr_28 [11] [11] [11] [11] [11] ;
unsigned char arr_29 [11] [11] [11] [11] ;
unsigned char arr_35 [11] [11] [11] ;
_Bool arr_38 [11] [11] [11] ;
unsigned char arr_50 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4219940601U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 2338180112U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 325841692U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)2584;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = -8502097836936150655LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = 919718784;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = 5921194276168013310ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 1217860129U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_47 [i_0] = -1702444681;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-12521;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)34246;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)39 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (unsigned char)76;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
