#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -345029649;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)10457;
short var_10 = (short)21708;
unsigned char var_11 = (unsigned char)250;
int var_14 = 928874097;
int zero = 0;
int var_18 = -1849197003;
signed char var_19 = (signed char)87;
int var_20 = -1485048944;
unsigned char var_21 = (unsigned char)198;
unsigned short var_22 = (unsigned short)9076;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
long long int var_25 = 2286322969173944364LL;
unsigned short var_26 = (unsigned short)14331;
signed char arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
long long int arr_2 [25] ;
short arr_5 [25] [25] ;
signed char arr_6 [25] [25] ;
unsigned char arr_3 [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2068899508817164734LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-28585;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 765297323;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
