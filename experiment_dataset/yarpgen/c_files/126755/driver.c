#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29014;
int var_1 = 110357456;
int var_2 = -277834944;
int var_3 = 13748007;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 4137014297U;
long long int var_7 = 7611211377256972821LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)115;
int var_11 = 609623081;
int var_12 = -1264958980;
int var_13 = -944426193;
unsigned long long int var_14 = 2750368475065261859ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3454923069562061162LL;
unsigned short var_17 = (unsigned short)41653;
int var_18 = -601388609;
unsigned short var_19 = (unsigned short)198;
_Bool var_20 = (_Bool)1;
int var_21 = 283782485;
signed char var_22 = (signed char)-104;
short var_23 = (short)-32543;
_Bool var_24 = (_Bool)0;
long long int var_25 = 2197268229601542305LL;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 4971369018859177408ULL;
_Bool var_30 = (_Bool)1;
int var_31 = -766259677;
long long int arr_0 [18] ;
_Bool arr_1 [18] ;
signed char arr_2 [18] ;
_Bool arr_3 [18] ;
int arr_4 [18] [18] [18] ;
unsigned short arr_8 [17] ;
short arr_9 [17] [17] ;
unsigned int arr_12 [17] ;
short arr_13 [17] ;
_Bool arr_15 [17] [17] [17] [17] ;
unsigned char arr_18 [10] [10] ;
short arr_30 [10] [10] [10] [10] ;
short arr_5 [18] [18] ;
short arr_6 [18] ;
int arr_11 [17] ;
short arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -5801481721640040188LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1410431060 : -200252386;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)39451;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (short)2890;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 4264523208U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (short)17716;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)11317;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31297 : (short)23407;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)8449;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -658371836;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (short)-1735;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
