#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6048069139382838472LL;
unsigned char var_2 = (unsigned char)139;
_Bool var_4 = (_Bool)0;
int var_6 = 2113964005;
long long int var_8 = -4964425564311096182LL;
long long int var_9 = -8551967545113162316LL;
int zero = 0;
int var_10 = -438058945;
_Bool var_11 = (_Bool)0;
int var_12 = 919647469;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)193;
unsigned short var_15 = (unsigned short)53859;
unsigned short var_16 = (unsigned short)43491;
unsigned long long int var_17 = 866867515408583051ULL;
int var_18 = 1604740459;
int var_19 = -389082181;
unsigned char var_20 = (unsigned char)229;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3499860723U;
int var_23 = -1544680425;
unsigned short var_24 = (unsigned short)57519;
_Bool arr_0 [10] [10] ;
_Bool arr_6 [10] [10] [10] [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned short arr_12 [10] ;
unsigned int arr_17 [10] [10] ;
_Bool arr_23 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3653396485759978377LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)48266;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = 1384472823U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
