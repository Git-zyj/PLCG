#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)135;
unsigned long long int var_12 = 11667095979900525178ULL;
unsigned long long int var_13 = 9571753492147728673ULL;
int zero = 0;
unsigned long long int var_19 = 12569038939632924129ULL;
int var_20 = 36433689;
unsigned long long int var_21 = 1364277518563108771ULL;
long long int var_22 = -6172454810899537358LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 15805590152351650336ULL;
_Bool var_25 = (_Bool)0;
signed char arr_0 [19] [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)11;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
