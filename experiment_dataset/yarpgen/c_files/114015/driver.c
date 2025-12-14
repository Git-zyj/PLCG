#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3955460449U;
long long int var_3 = -5559222230222139436LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 916106049U;
unsigned short var_10 = (unsigned short)33714;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
long long int var_14 = 3493144864902923300LL;
short var_15 = (short)2663;
int var_16 = 877575201;
_Bool var_17 = (_Bool)0;
int var_18 = 149018438;
_Bool var_19 = (_Bool)0;
int var_20 = -1176062704;
_Bool arr_6 [13] ;
unsigned long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 12130684106488024266ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
