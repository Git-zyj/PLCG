#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned long long int var_2 = 5734340171216381246ULL;
unsigned char var_3 = (unsigned char)201;
signed char var_4 = (signed char)-71;
unsigned char var_5 = (unsigned char)50;
long long int var_6 = 5902787188537103602LL;
long long int var_7 = 8671569884421584352LL;
signed char var_8 = (signed char)-52;
unsigned char var_10 = (unsigned char)15;
int zero = 0;
short var_11 = (short)22431;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-12204;
signed char var_14 = (signed char)-76;
unsigned char var_15 = (unsigned char)144;
unsigned long long int var_16 = 781398145391205676ULL;
unsigned int var_17 = 848843597U;
unsigned char var_18 = (unsigned char)111;
short var_19 = (short)-18185;
unsigned long long int var_20 = 17442427078304740835ULL;
signed char var_21 = (signed char)-96;
unsigned char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
_Bool arr_2 [11] ;
_Bool arr_3 [11] [11] ;
short arr_4 [11] [11] [11] ;
short arr_5 [11] [11] ;
unsigned int arr_7 [11] [11] [11] ;
long long int arr_9 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8433048257380887179ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)8361 : (short)2655;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-280;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 900590973U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2810250812865600311LL : 459293842987005694LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
