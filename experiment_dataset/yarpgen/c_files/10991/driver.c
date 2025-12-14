#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-3081;
signed char var_9 = (signed char)38;
signed char var_12 = (signed char)-58;
signed char var_13 = (signed char)-17;
signed char var_14 = (signed char)126;
int zero = 0;
signed char var_15 = (signed char)80;
int var_16 = -591074632;
unsigned char var_17 = (unsigned char)47;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2483862941U;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
short arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 72648696U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3548402408U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)17883 : (short)-24819;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2233072262U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -4570937419049918324LL : -8435224876878317091LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
