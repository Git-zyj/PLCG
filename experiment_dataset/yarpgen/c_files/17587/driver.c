#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4364891875150291876ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 8501386929670430354ULL;
unsigned char var_11 = (unsigned char)194;
unsigned long long int var_12 = 15628968063546948509ULL;
unsigned int var_17 = 3643291243U;
int zero = 0;
unsigned char var_18 = (unsigned char)230;
int var_19 = -1725471765;
int var_20 = -1346396581;
unsigned int var_21 = 3938652685U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)180;
signed char var_24 = (signed char)14;
long long int var_25 = -4930466745349932071LL;
short var_26 = (short)-24458;
short var_27 = (short)-11316;
long long int arr_2 [24] ;
short arr_3 [24] ;
unsigned int arr_4 [22] ;
long long int arr_5 [22] [22] ;
signed char arr_6 [22] ;
unsigned int arr_7 [22] ;
int arr_12 [22] ;
signed char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2569408654122530957LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)18963;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3556485751U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -2299198385290382803LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1951308300U : 3672476622U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2057845992 : -772567244;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)67;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
