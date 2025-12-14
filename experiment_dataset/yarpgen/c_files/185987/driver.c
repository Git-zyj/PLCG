#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7077225603616989644LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)10813;
unsigned long long int var_13 = 7514603643037824680ULL;
unsigned char var_14 = (unsigned char)10;
short var_15 = (short)25418;
unsigned char arr_3 [13] ;
short arr_6 [13] ;
unsigned int arr_7 [22] ;
short arr_8 [22] ;
_Bool arr_9 [22] [22] ;
long long int arr_10 [22] ;
short arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)11071;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 631736867U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)12652;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -7305375022827424343LL : 5563659396216821452LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (short)5565;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
