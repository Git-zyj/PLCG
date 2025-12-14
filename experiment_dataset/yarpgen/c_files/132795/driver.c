#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
unsigned int var_2 = 1237348114U;
signed char var_3 = (signed char)125;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)12;
signed char var_6 = (signed char)-120;
signed char var_7 = (signed char)-81;
unsigned short var_9 = (unsigned short)55402;
long long int var_15 = 6702508237886565871LL;
unsigned int var_16 = 2826531852U;
unsigned long long int var_17 = 2826031013051293878ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)42;
short var_21 = (short)-26271;
signed char var_22 = (signed char)-73;
unsigned long long int var_23 = 11186228912092758902ULL;
_Bool var_24 = (_Bool)0;
short var_25 = (short)20466;
unsigned short var_26 = (unsigned short)26033;
unsigned char var_27 = (unsigned char)73;
short var_28 = (short)-10925;
unsigned char var_29 = (unsigned char)36;
short var_30 = (short)-15398;
short var_31 = (short)-2105;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
short arr_10 [24] [24] [24] ;
long long int arr_12 [24] [24] [24] ;
unsigned int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)33989;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2314437900395950ULL : 4799692895687329760ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-2867 : (short)-11128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -8601166442076275260LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3079063797U : 348912000U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
