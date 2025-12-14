#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2742848266U;
long long int var_2 = -3552534563102896394LL;
unsigned long long int var_3 = 11440566183024749780ULL;
unsigned char var_4 = (unsigned char)116;
unsigned char var_5 = (unsigned char)59;
unsigned char var_6 = (unsigned char)124;
signed char var_7 = (signed char)42;
short var_8 = (short)30788;
long long int var_9 = 1125629452203664198LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1020864293;
unsigned char var_12 = (unsigned char)25;
long long int var_13 = -1998902282628394789LL;
long long int arr_0 [25] ;
long long int arr_1 [25] ;
signed char arr_2 [25] ;
unsigned int arr_4 [25] [25] ;
short arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2912201784428444552LL : -8999581909160680215LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6181062757342943125LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2687090005U : 265811556U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)14130 : (short)-14130;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
