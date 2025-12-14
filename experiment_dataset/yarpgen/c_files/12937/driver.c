#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2326637980242261052ULL;
signed char var_1 = (signed char)107;
int var_3 = -629858856;
unsigned long long int var_4 = 2873510610727699815ULL;
unsigned long long int var_6 = 4739320673557417170ULL;
signed char var_8 = (signed char)110;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3995261323U;
int zero = 0;
int var_11 = -1888428143;
unsigned char var_12 = (unsigned char)112;
signed char var_13 = (signed char)-14;
unsigned char var_14 = (unsigned char)230;
_Bool var_15 = (_Bool)1;
signed char arr_0 [17] ;
_Bool arr_3 [17] ;
signed char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)54;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
