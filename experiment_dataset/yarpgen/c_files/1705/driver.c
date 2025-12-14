#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10494108345127823520ULL;
unsigned short var_1 = (unsigned short)39728;
_Bool var_2 = (_Bool)0;
int var_3 = -756364362;
signed char var_4 = (signed char)-51;
unsigned short var_5 = (unsigned short)18043;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1682554545236269451LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)4272;
unsigned short var_12 = (unsigned short)58592;
unsigned short var_13 = (unsigned short)14922;
unsigned char var_14 = (unsigned char)191;
signed char var_15 = (signed char)-16;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8607008950949604011ULL;
unsigned int var_18 = 1926043064U;
unsigned int var_19 = 1851818211U;
int var_20 = 1447280594;
long long int var_21 = 4999268853171041863LL;
unsigned short arr_0 [18] [18] ;
long long int arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
unsigned long long int arr_4 [18] [18] ;
short arr_6 [18] [18] ;
unsigned char arr_7 [18] ;
signed char arr_9 [18] ;
unsigned char arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)57743;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5470964679424968891LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40027;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 11511066247905365197ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (short)19854;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)126;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
