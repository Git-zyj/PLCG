#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2100241063U;
int var_1 = 946374532;
unsigned char var_4 = (unsigned char)72;
short var_6 = (short)-16120;
unsigned char var_7 = (unsigned char)246;
unsigned char var_8 = (unsigned char)112;
unsigned short var_10 = (unsigned short)3906;
int var_11 = -1116958407;
long long int var_12 = 1555519714148218265LL;
long long int var_14 = 2304356798605047056LL;
int zero = 0;
unsigned int var_15 = 346600376U;
unsigned int var_16 = 3238946271U;
unsigned int var_17 = 2027204228U;
unsigned long long int var_18 = 10917673437020593450ULL;
unsigned char var_19 = (unsigned char)83;
short var_20 = (short)9488;
int var_21 = 1787501313;
int var_22 = 2040817914;
unsigned int var_23 = 873714887U;
long long int var_24 = -3854444507662792881LL;
short var_25 = (short)-29464;
unsigned char var_26 = (unsigned char)30;
_Bool arr_0 [24] [24] ;
int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
_Bool arr_3 [24] ;
long long int arr_6 [24] [24] [24] ;
signed char arr_9 [18] ;
unsigned long long int arr_10 [18] ;
unsigned long long int arr_13 [11] ;
long long int arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -538387545;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4047062710U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -3149589147542989550LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 18186182323343271482ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 2260452992261077698ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = -3617531931203010296LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
