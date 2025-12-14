#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6253889620516562567LL;
unsigned char var_1 = (unsigned char)78;
int var_2 = 919825794;
int var_3 = -849078003;
short var_4 = (short)-12213;
int var_5 = -1084589705;
unsigned short var_6 = (unsigned short)41355;
int var_7 = 65762561;
int var_8 = 163164095;
short var_9 = (short)861;
signed char var_11 = (signed char)-20;
short var_12 = (short)123;
unsigned short var_13 = (unsigned short)20060;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12007525937386394920ULL;
int zero = 0;
int var_19 = 573474119;
int var_20 = 462327117;
unsigned int var_21 = 1252098007U;
unsigned long long int var_22 = 5507103032760814747ULL;
unsigned char var_23 = (unsigned char)156;
unsigned char var_24 = (unsigned char)21;
_Bool var_25 = (_Bool)1;
short arr_0 [23] ;
short arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
unsigned char arr_3 [13] ;
signed char arr_7 [10] ;
short arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-6151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)29319;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)35104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)6933;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
