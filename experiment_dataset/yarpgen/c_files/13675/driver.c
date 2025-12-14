#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -718459269;
unsigned short var_1 = (unsigned short)34443;
_Bool var_2 = (_Bool)0;
int var_5 = -1288096105;
signed char var_7 = (signed char)-31;
unsigned long long int var_8 = 10987105708720940810ULL;
signed char var_9 = (signed char)19;
unsigned int var_10 = 3629894433U;
short var_12 = (short)-20274;
signed char var_13 = (signed char)-38;
unsigned int var_14 = 217087051U;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
int var_19 = -42028610;
short var_20 = (short)31492;
unsigned int var_21 = 3243645453U;
unsigned long long int var_22 = 7825087228796562196ULL;
int var_23 = -2038750349;
unsigned short var_24 = (unsigned short)11140;
signed char arr_0 [19] ;
short arr_1 [19] ;
long long int arr_2 [19] ;
_Bool arr_3 [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)23872;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -8575599123118906912LL : -8518818672976732450LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-60;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
