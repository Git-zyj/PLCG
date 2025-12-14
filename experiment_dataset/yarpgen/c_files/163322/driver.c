#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned long long int var_1 = 16003582125579856061ULL;
int var_3 = 1980625482;
unsigned char var_4 = (unsigned char)47;
int var_5 = 137576726;
unsigned long long int var_9 = 9951016248464560918ULL;
signed char var_11 = (signed char)107;
unsigned char var_12 = (unsigned char)73;
short var_13 = (short)-8116;
unsigned int var_14 = 337153321U;
signed char var_16 = (signed char)-72;
int zero = 0;
int var_17 = -1673852612;
unsigned long long int var_18 = 11703961687939612227ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)(-127 - 1);
signed char var_22 = (signed char)105;
long long int var_23 = 8239060703053906109LL;
unsigned short var_24 = (unsigned short)49783;
short var_25 = (short)6673;
unsigned short var_26 = (unsigned short)48291;
int var_27 = 222514145;
unsigned int var_28 = 37657565U;
unsigned int var_29 = 2379024243U;
unsigned short var_30 = (unsigned short)14710;
_Bool var_31 = (_Bool)1;
long long int var_32 = -5590843781985445989LL;
short var_33 = (short)-5965;
unsigned int var_34 = 2481210952U;
signed char var_35 = (signed char)19;
int var_36 = 1925710069;
long long int arr_9 [23] ;
_Bool arr_10 [23] [23] ;
int arr_15 [23] [23] [23] [23] ;
_Bool arr_19 [23] ;
unsigned char arr_20 [23] [23] [23] [23] ;
signed char arr_28 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -7540077498561084974LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -915089241 : 1618938502;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)38 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (signed char)11 : (signed char)120;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
