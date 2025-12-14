#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8576165475576615253LL;
short var_2 = (short)20459;
unsigned long long int var_4 = 16455949938692001051ULL;
short var_5 = (short)-14910;
int var_6 = -884535040;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_11 = 591010960;
short var_12 = (short)-23441;
unsigned short var_13 = (unsigned short)54913;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2020031991U;
short arr_2 [22] ;
unsigned long long int arr_5 [11] ;
unsigned short arr_8 [24] ;
unsigned int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)31670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1215865612255248603ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)61105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 300734603U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
