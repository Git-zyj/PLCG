#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1598279302725009863ULL;
signed char var_1 = (signed char)-79;
unsigned long long int var_3 = 12090407434646672303ULL;
unsigned short var_4 = (unsigned short)57989;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)24004;
long long int var_12 = 8316114726918546061LL;
unsigned short var_13 = (unsigned short)7808;
unsigned long long int var_15 = 6857462247887048831ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)181;
unsigned char var_22 = (unsigned char)243;
short var_23 = (short)-25943;
int var_24 = -2015711314;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5149078433465177398LL;
_Bool arr_1 [14] ;
_Bool arr_4 [14] ;
unsigned char arr_5 [14] [14] ;
short arr_6 [14] ;
short arr_8 [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)31128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-26747;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 13839497643586608285ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
