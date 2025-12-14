#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21536;
short var_3 = (short)1066;
long long int var_5 = -6664588208268920614LL;
unsigned int var_6 = 45853566U;
unsigned char var_7 = (unsigned char)182;
short var_8 = (short)-26537;
int var_9 = -688816445;
signed char var_10 = (signed char)99;
long long int var_11 = -705794264300701167LL;
unsigned int var_12 = 4276025448U;
int zero = 0;
signed char var_14 = (signed char)18;
unsigned long long int var_15 = 6609970895847603661ULL;
unsigned short var_16 = (unsigned short)2215;
short var_17 = (short)25970;
short var_18 = (short)19418;
short var_19 = (short)22225;
signed char var_20 = (signed char)-41;
short arr_0 [23] ;
signed char arr_1 [23] ;
unsigned int arr_2 [23] ;
_Bool arr_4 [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-7549;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1510243285U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1380033856;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
