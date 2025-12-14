#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9464;
unsigned char var_1 = (unsigned char)123;
short var_2 = (short)-20106;
long long int var_3 = 8061361440173373627LL;
unsigned int var_4 = 1834289942U;
unsigned int var_6 = 549535319U;
signed char var_9 = (signed char)120;
int zero = 0;
unsigned int var_10 = 2659162257U;
unsigned long long int var_11 = 8946963056964250892ULL;
unsigned char var_12 = (unsigned char)47;
unsigned int var_13 = 3132087348U;
signed char var_14 = (signed char)-61;
signed char var_15 = (signed char)74;
long long int arr_0 [18] ;
short arr_1 [18] [18] ;
unsigned long long int arr_6 [19] ;
unsigned char arr_2 [18] [18] ;
unsigned int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 5012414095539912669LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10677;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3492733118635610435ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 297025307U : 2424944984U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
