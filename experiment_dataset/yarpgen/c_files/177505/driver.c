#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4218031755U;
unsigned int var_1 = 3349781381U;
unsigned short var_2 = (unsigned short)12339;
unsigned short var_3 = (unsigned short)48860;
int var_10 = -1755245673;
long long int var_11 = 4893051446486379724LL;
unsigned char var_14 = (unsigned char)132;
int zero = 0;
long long int var_19 = 3319398831408623705LL;
int var_20 = 802203033;
int var_21 = 2049137909;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2145062536927355900LL;
unsigned short var_24 = (unsigned short)6750;
unsigned int var_25 = 798149500U;
long long int var_26 = -289496377304264711LL;
short var_27 = (short)-20196;
long long int var_28 = -9029536118870702039LL;
_Bool var_29 = (_Bool)0;
long long int var_30 = -4032745466380084371LL;
unsigned int var_31 = 2522271277U;
unsigned char var_32 = (unsigned char)251;
_Bool var_33 = (_Bool)0;
long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
long long int arr_4 [23] ;
_Bool arr_5 [23] [23] [23] ;
int arr_6 [23] ;
unsigned short arr_7 [23] [23] [23] [23] ;
long long int arr_8 [23] [23] ;
long long int arr_13 [23] [23] [23] [23] [23] ;
long long int arr_18 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 6035753947749646832LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)24366;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 336715395239119588LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 983429953;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37977;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -7750725900554711156LL : -905942760877459064LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -5727311211868309861LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 1546119073695839012LL : -8487630826534204613LL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
