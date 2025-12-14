#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5499;
signed char var_3 = (signed char)28;
short var_7 = (short)3588;
unsigned char var_8 = (unsigned char)144;
unsigned char var_10 = (unsigned char)168;
short var_12 = (short)18276;
int zero = 0;
unsigned char var_14 = (unsigned char)156;
unsigned short var_15 = (unsigned short)51516;
unsigned char var_16 = (unsigned char)76;
unsigned long long int var_17 = 12371649230067527031ULL;
long long int var_18 = 4338812584785147729LL;
unsigned char var_19 = (unsigned char)30;
unsigned char var_20 = (unsigned char)157;
int var_21 = -634930290;
unsigned short var_22 = (unsigned short)11841;
signed char var_23 = (signed char)33;
unsigned short arr_1 [14] ;
unsigned int arr_5 [15] [15] ;
unsigned int arr_6 [15] [15] ;
unsigned short arr_7 [15] ;
int arr_8 [15] ;
unsigned char arr_11 [15] [15] [15] ;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)31553;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 201487954U : 2452606107U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2224598633U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)31139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1190776204 : 1534243483;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)3 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)21086 : (short)15583;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
