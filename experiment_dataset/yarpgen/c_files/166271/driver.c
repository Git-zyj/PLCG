#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -369860792;
unsigned char var_1 = (unsigned char)11;
short var_2 = (short)12150;
long long int var_3 = 8194765331604610797LL;
long long int var_5 = 873086296201769344LL;
long long int var_8 = -6184466033843377590LL;
unsigned long long int var_9 = 8752787956624969008ULL;
unsigned long long int var_10 = 285321711820523418ULL;
long long int var_13 = -2363326017395498686LL;
int zero = 0;
unsigned long long int var_15 = 6242350502372846885ULL;
unsigned char var_16 = (unsigned char)171;
unsigned short var_17 = (unsigned short)47272;
int var_18 = 2071174141;
short var_19 = (short)22096;
unsigned long long int var_20 = 2554769451617147528ULL;
int arr_0 [12] ;
unsigned short arr_4 [12] [12] ;
_Bool arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 83129320;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57125 : (unsigned short)2537;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
