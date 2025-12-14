#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)603;
signed char var_8 = (signed char)-33;
unsigned long long int var_9 = 3757827907365517125ULL;
int var_10 = -871313270;
unsigned long long int var_12 = 10731160635841352092ULL;
unsigned short var_13 = (unsigned short)38836;
unsigned short var_14 = (unsigned short)32847;
int zero = 0;
unsigned short var_16 = (unsigned short)35194;
unsigned short var_17 = (unsigned short)15405;
long long int var_18 = -3225114587653628845LL;
short var_19 = (short)28046;
signed char var_20 = (signed char)-124;
_Bool var_21 = (_Bool)0;
signed char arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_6 [10] ;
unsigned long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2411914756956099567LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 11539142263419419131ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)56956;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7813270965246046045ULL : 15880906606043610036ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 15806704944135763656ULL : 11195864514620118064ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
