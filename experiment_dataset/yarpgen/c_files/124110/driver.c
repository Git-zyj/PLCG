#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3623797868265677702LL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-1;
unsigned short var_5 = (unsigned short)60479;
int var_8 = -1828303260;
int zero = 0;
int var_13 = 351453627;
int var_14 = 947089235;
long long int var_15 = -7627352706335232091LL;
unsigned short var_16 = (unsigned short)54516;
unsigned long long int var_17 = 4566658396593254062ULL;
int var_18 = 2016869314;
unsigned char var_19 = (unsigned char)184;
int var_20 = 1162888627;
long long int var_21 = -2057348614699556547LL;
unsigned short var_22 = (unsigned short)4612;
short var_23 = (short)4272;
long long int var_24 = 3324668791680674812LL;
_Bool var_25 = (_Bool)0;
unsigned char arr_0 [19] ;
unsigned short arr_1 [19] ;
int arr_2 [19] ;
unsigned short arr_5 [21] ;
int arr_6 [21] ;
unsigned short arr_7 [14] [14] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)56776;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -303190947;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)35580;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1416712709;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)24541;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1894371644;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
