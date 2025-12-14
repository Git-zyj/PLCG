#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1967658809U;
unsigned char var_1 = (unsigned char)38;
short var_3 = (short)9706;
unsigned short var_4 = (unsigned short)48844;
signed char var_5 = (signed char)56;
unsigned long long int var_8 = 18256719616049144066ULL;
unsigned char var_9 = (unsigned char)172;
unsigned int var_11 = 463925522U;
signed char var_13 = (signed char)60;
unsigned short var_14 = (unsigned short)47122;
unsigned char var_17 = (unsigned char)118;
short var_18 = (short)18310;
signed char var_19 = (signed char)87;
int zero = 0;
unsigned long long int var_20 = 10739350832141066347ULL;
unsigned int var_21 = 3854830379U;
unsigned short var_22 = (unsigned short)15970;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)1922;
unsigned short var_25 = (unsigned short)8114;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)89;
unsigned char var_29 = (unsigned char)83;
unsigned char var_30 = (unsigned char)64;
signed char var_31 = (signed char)-26;
unsigned short var_32 = (unsigned short)34634;
signed char var_33 = (signed char)66;
_Bool var_34 = (_Bool)0;
short arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
short arr_4 [10] ;
_Bool arr_5 [10] [10] [10] ;
unsigned int arr_6 [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
_Bool arr_9 [10] [10] [10] [10] ;
unsigned int arr_11 [10] [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] [10] ;
unsigned long long int arr_18 [12] ;
unsigned char arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)8737;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1928139293U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-12642 : (short)-20507;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 816209106U : 2852874588U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 3829964363U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 156426782U : 1467257985U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 6771012433777562875ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)58;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
