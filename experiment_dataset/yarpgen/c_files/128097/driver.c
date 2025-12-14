#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5374211696150023705LL;
signed char var_4 = (signed char)83;
long long int var_5 = -399583851960113673LL;
unsigned long long int var_7 = 15171962080142199378ULL;
unsigned char var_8 = (unsigned char)222;
signed char var_9 = (signed char)78;
int var_11 = 1198797340;
short var_15 = (short)20847;
unsigned char var_17 = (unsigned char)50;
unsigned int var_18 = 2350978849U;
int zero = 0;
unsigned int var_19 = 173851435U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15727;
int var_22 = -1631919287;
int var_23 = -1393233759;
unsigned char var_24 = (unsigned char)29;
unsigned char var_25 = (unsigned char)146;
unsigned int var_26 = 852669831U;
unsigned long long int var_27 = 4097812674853321508ULL;
unsigned char arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
long long int arr_2 [23] ;
unsigned short arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned short arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1961849577861602398LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)31120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 17802331252238393203ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)44243;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
