#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6309012117526160120LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)164;
unsigned long long int var_7 = 6250106665758518269ULL;
int var_8 = 1554320730;
int var_9 = 888792217;
long long int var_10 = -6789568474129303492LL;
int zero = 0;
unsigned long long int var_12 = 7383072358863629105ULL;
signed char var_13 = (signed char)22;
int var_14 = 791837389;
short var_15 = (short)25299;
unsigned int var_16 = 1572055072U;
short var_17 = (short)1363;
long long int var_18 = 8898839173620941298LL;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
unsigned short arr_2 [11] [11] ;
unsigned short arr_3 [11] ;
_Bool arr_5 [16] [16] ;
unsigned char arr_6 [16] [16] ;
_Bool arr_7 [16] ;
_Bool arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)56984;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)19466;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
