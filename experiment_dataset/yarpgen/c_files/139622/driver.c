#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3578;
unsigned long long int var_4 = 15982718323822910152ULL;
signed char var_8 = (signed char)-9;
unsigned char var_9 = (unsigned char)92;
signed char var_10 = (signed char)60;
short var_11 = (short)17282;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned long long int var_15 = 10719275914055874743ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 2040947909;
short var_18 = (short)369;
unsigned char var_19 = (unsigned char)92;
int var_20 = 172644456;
unsigned short var_21 = (unsigned short)43722;
int arr_1 [20] ;
long long int arr_2 [20] ;
unsigned int arr_3 [17] [17] ;
unsigned short arr_6 [17] ;
int arr_8 [17] ;
long long int arr_9 [17] [17] ;
int arr_5 [17] [17] ;
unsigned short arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1161218888;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5333285620543440515LL : -4939043196849607033LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 520542722U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)5997;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -1998977375;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = -6798374351419110943LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 766089935;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)44322;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
