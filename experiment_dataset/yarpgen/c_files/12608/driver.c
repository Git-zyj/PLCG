#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64946;
unsigned long long int var_6 = 3982566316032071460ULL;
unsigned char var_10 = (unsigned char)194;
int var_15 = -1118559951;
unsigned long long int var_16 = 15666629854841899743ULL;
short var_17 = (short)29439;
long long int var_19 = 31926822179891907LL;
int zero = 0;
unsigned char var_20 = (unsigned char)48;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)209;
unsigned char var_23 = (unsigned char)54;
unsigned char arr_0 [19] [19] ;
unsigned char arr_1 [19] [19] ;
_Bool arr_4 [12] ;
long long int arr_3 [19] ;
unsigned char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3861385946447153947LL : -3634692951686735814LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)39;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
