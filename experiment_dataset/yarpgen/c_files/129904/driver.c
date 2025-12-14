#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
_Bool var_6 = (_Bool)0;
int var_9 = -896222863;
int var_10 = -355657302;
signed char var_12 = (signed char)54;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 3018797424U;
long long int var_15 = -2567767412583681436LL;
unsigned short var_19 = (unsigned short)6395;
int zero = 0;
signed char var_20 = (signed char)-119;
unsigned char var_21 = (unsigned char)199;
short var_22 = (short)-533;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)18;
unsigned char var_25 = (unsigned char)106;
unsigned int var_26 = 3726411257U;
signed char var_27 = (signed char)-78;
int arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_2 [18] ;
int arr_3 [18] ;
_Bool arr_4 [18] ;
unsigned char arr_5 [18] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1346695391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)21198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 776615192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3467181939U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
