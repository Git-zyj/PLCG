#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 838053581;
unsigned char var_1 = (unsigned char)103;
unsigned long long int var_2 = 18342093181616664403ULL;
signed char var_3 = (signed char)70;
unsigned long long int var_4 = 3966702520830064560ULL;
_Bool var_6 = (_Bool)1;
short var_13 = (short)-19859;
signed char var_14 = (signed char)83;
short var_15 = (short)620;
int zero = 0;
unsigned long long int var_16 = 12114829446558077757ULL;
signed char var_17 = (signed char)107;
unsigned long long int var_18 = 346842090067805652ULL;
signed char var_19 = (signed char)69;
unsigned long long int var_20 = 3151115687163116190ULL;
short var_21 = (short)6202;
unsigned short arr_2 [20] ;
signed char arr_5 [17] ;
unsigned int arr_7 [17] ;
_Bool arr_8 [17] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_6 [17] ;
long long int arr_9 [17] ;
short arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)14506;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 2723812391U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 11977770180541595007ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 11301109260245799765ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 7967985953964565202LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-12098;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
