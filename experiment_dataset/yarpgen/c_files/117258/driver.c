#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 4264391002U;
unsigned char var_3 = (unsigned char)84;
long long int var_4 = 8317331135122734026LL;
unsigned short var_6 = (unsigned short)22935;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -6107314607536745610LL;
unsigned int var_11 = 3996646361U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-42;
short var_15 = (short)-2274;
unsigned long long int var_16 = 12997210574748789402ULL;
unsigned char var_17 = (unsigned char)30;
unsigned int var_18 = 4251249422U;
short var_19 = (short)-26782;
unsigned char var_20 = (unsigned char)197;
unsigned short var_21 = (unsigned short)26348;
unsigned short var_22 = (unsigned short)56662;
short var_23 = (short)8538;
unsigned char arr_0 [20] ;
int arr_1 [20] ;
unsigned short arr_2 [20] ;
int arr_4 [20] ;
signed char arr_5 [20] [20] ;
unsigned int arr_12 [20] [20] [20] [20] ;
unsigned char arr_14 [20] [20] [20] [20] ;
unsigned long long int arr_6 [20] ;
long long int arr_18 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1571362250;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)59964;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1174497008;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 3857921563U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 16359908905734074228ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 7241416673364046276LL : -5658470048921326353LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
