#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19178;
unsigned long long int var_5 = 3154519839538734690ULL;
unsigned short var_6 = (unsigned short)25117;
_Bool var_7 = (_Bool)0;
long long int var_11 = 1570015579386925009LL;
int zero = 0;
unsigned char var_12 = (unsigned char)49;
long long int var_13 = -4291982279249010670LL;
unsigned short var_14 = (unsigned short)47246;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2945750160U;
signed char var_17 = (signed char)-100;
unsigned short var_18 = (unsigned short)57744;
unsigned char var_19 = (unsigned char)229;
signed char var_20 = (signed char)103;
unsigned char arr_0 [21] ;
unsigned char arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned short arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)52993;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)43200;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
