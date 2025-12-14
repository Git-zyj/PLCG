#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 2010954894;
unsigned char var_3 = (unsigned char)26;
signed char var_5 = (signed char)120;
_Bool var_6 = (_Bool)0;
long long int var_7 = 2131620842385028076LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = -8908006515905656176LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3486594342953986506LL;
int zero = 0;
int var_16 = 489882415;
unsigned long long int var_17 = 11050264290217052130ULL;
unsigned short var_18 = (unsigned short)37627;
signed char var_19 = (signed char)-105;
long long int var_20 = -332217481978045556LL;
unsigned short var_21 = (unsigned short)41872;
short arr_2 [11] ;
int arr_5 [12] ;
unsigned short arr_6 [12] ;
unsigned char arr_9 [20] ;
unsigned short arr_4 [11] ;
unsigned short arr_7 [12] ;
signed char arr_11 [20] ;
long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)14010;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1036983652;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)13467;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)61408;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)41991;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -8441553926764546974LL : 8024314871697035566LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
