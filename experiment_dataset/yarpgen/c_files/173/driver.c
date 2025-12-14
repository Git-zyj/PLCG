#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3421100258763802200LL;
unsigned char var_1 = (unsigned char)36;
unsigned short var_2 = (unsigned short)39398;
unsigned char var_3 = (unsigned char)248;
unsigned short var_4 = (unsigned short)45559;
long long int var_5 = 4121281527799889540LL;
unsigned int var_6 = 2817172036U;
unsigned char var_7 = (unsigned char)97;
long long int var_8 = -6349729619432384875LL;
unsigned long long int var_9 = 9400503590675690404ULL;
long long int var_11 = -4778209741727220497LL;
short var_12 = (short)29253;
signed char var_13 = (signed char)-93;
int zero = 0;
signed char var_14 = (signed char)-121;
short var_15 = (short)-23837;
long long int var_16 = 306949142529555058LL;
unsigned short var_17 = (unsigned short)24559;
unsigned char var_18 = (unsigned char)51;
unsigned short var_19 = (unsigned short)18183;
unsigned long long int var_20 = 2549743545457229883ULL;
short arr_0 [12] ;
signed char arr_1 [12] ;
_Bool arr_2 [12] [12] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_6 [22] ;
unsigned int arr_3 [12] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)17677;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 8205366132021288428ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 462175097051937145ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1892951739U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -2722309433903753480LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
