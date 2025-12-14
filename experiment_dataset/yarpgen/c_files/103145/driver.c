#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2520837268U;
unsigned long long int var_1 = 5239259668673554216ULL;
int var_3 = 343608736;
unsigned char var_4 = (unsigned char)194;
unsigned long long int var_7 = 14362941200333563217ULL;
unsigned long long int var_8 = 12410775786790784629ULL;
unsigned char var_12 = (unsigned char)131;
unsigned long long int var_13 = 14360139692132756785ULL;
short var_15 = (short)-14325;
int zero = 0;
unsigned long long int var_19 = 10133290364785838597ULL;
int var_20 = 836794958;
short var_21 = (short)-9260;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)61791;
unsigned short var_24 = (unsigned short)54047;
_Bool var_25 = (_Bool)0;
int var_26 = 1863218811;
unsigned short arr_0 [18] ;
signed char arr_1 [18] ;
signed char arr_2 [18] ;
signed char arr_4 [10] ;
unsigned char arr_5 [10] ;
unsigned char arr_6 [10] ;
unsigned char arr_8 [10] ;
unsigned int arr_9 [10] ;
signed char arr_3 [18] ;
int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)37516;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1186557180U : 4275099417U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 506453138 : -1599361861;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
