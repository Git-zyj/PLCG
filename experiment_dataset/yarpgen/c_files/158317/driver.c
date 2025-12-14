#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21577;
unsigned char var_6 = (unsigned char)196;
signed char var_11 = (signed char)78;
unsigned short var_12 = (unsigned short)22050;
unsigned char var_13 = (unsigned char)97;
int zero = 0;
long long int var_16 = -2234159094716320177LL;
short var_17 = (short)15806;
int var_18 = 198386414;
unsigned char var_19 = (unsigned char)136;
short var_20 = (short)20496;
unsigned char var_21 = (unsigned char)161;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned char arr_4 [19] [19] ;
short arr_5 [19] ;
long long int arr_6 [19] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14790700113770858740ULL : 16179763140924399676ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6022573750704032510ULL : 15958215171045214082ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-25084;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 5865620315751855660LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)28;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
