#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52984;
unsigned int var_2 = 1709097064U;
unsigned int var_3 = 2310935049U;
unsigned int var_4 = 4276348529U;
unsigned char var_5 = (unsigned char)233;
unsigned char var_7 = (unsigned char)198;
short var_9 = (short)-25856;
unsigned short var_14 = (unsigned short)16010;
signed char var_15 = (signed char)-53;
short var_18 = (short)28136;
long long int var_19 = -8407753483880633119LL;
int zero = 0;
unsigned int var_20 = 1584259107U;
unsigned char var_21 = (unsigned char)141;
signed char var_22 = (signed char)-114;
long long int var_23 = -4274583806690134067LL;
unsigned int var_24 = 1221209069U;
short var_25 = (short)4527;
long long int var_26 = 7261177437198190741LL;
long long int var_27 = -3453224540408712655LL;
short var_28 = (short)24891;
_Bool var_29 = (_Bool)0;
long long int arr_0 [16] [16] ;
signed char arr_1 [16] [16] ;
long long int arr_2 [16] [16] [16] ;
unsigned long long int arr_3 [16] ;
signed char arr_5 [16] ;
long long int arr_6 [16] ;
short arr_16 [12] [12] ;
signed char arr_7 [16] [16] [16] ;
long long int arr_8 [16] ;
unsigned int arr_9 [16] ;
signed char arr_17 [12] ;
long long int arr_20 [12] [12] ;
short arr_21 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2258345608627410185LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1865352685639970762LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 11138211617806505679ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -5359791563155433398LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-2146 : (short)5029;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 4183138626821436734LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1285477945U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 5274801021608926334LL : 2807410901802657842LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21855 : (short)25809;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
