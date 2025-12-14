#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64355;
short var_1 = (short)-18361;
long long int var_3 = 7089680815057483084LL;
unsigned int var_5 = 1710498066U;
short var_7 = (short)-17518;
int zero = 0;
int var_10 = 587883700;
signed char var_11 = (signed char)-11;
unsigned char var_12 = (unsigned char)241;
int var_13 = 1797821561;
unsigned char var_14 = (unsigned char)90;
unsigned char var_15 = (unsigned char)76;
unsigned char var_16 = (unsigned char)229;
int var_17 = -1130110736;
short var_18 = (short)-13288;
long long int var_19 = -8442449246547583135LL;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
int arr_4 [18] [18] ;
unsigned long long int arr_6 [18] ;
unsigned int arr_7 [18] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7641869355865748273ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2688566170224772384ULL : 9058836653071121143ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1473747328;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 13910499355895750620ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 3806434772U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)189;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
