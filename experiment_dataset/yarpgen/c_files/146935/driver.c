#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35158;
int var_1 = -913898950;
short var_2 = (short)24457;
int var_3 = -1133502784;
unsigned long long int var_5 = 3104405680899567928ULL;
unsigned char var_6 = (unsigned char)60;
unsigned long long int var_7 = 4536230626000140369ULL;
unsigned long long int var_9 = 7632253768030835118ULL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-57;
unsigned long long int var_13 = 15644542511428746161ULL;
int zero = 0;
unsigned long long int var_14 = 16899308598583153746ULL;
unsigned char var_15 = (unsigned char)174;
unsigned long long int var_16 = 10414979139305783446ULL;
unsigned char var_17 = (unsigned char)71;
_Bool arr_0 [24] ;
long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned short arr_7 [16] ;
unsigned char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -5196217729674999176LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6786605554266401727ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 616055186U : 2460017360U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)51328;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)214;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
