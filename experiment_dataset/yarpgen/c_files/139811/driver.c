#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8539323731575631177LL;
unsigned char var_2 = (unsigned char)42;
unsigned long long int var_3 = 2587908720083535439ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2913311167517707235ULL;
long long int var_17 = -3262149196746462753LL;
int zero = 0;
unsigned long long int var_18 = 13427022380281022232ULL;
unsigned long long int var_19 = 711317784329605760ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 18141503729398581096ULL;
unsigned int var_22 = 1947652699U;
signed char var_23 = (signed char)123;
unsigned char var_24 = (unsigned char)165;
unsigned char arr_0 [24] [24] ;
signed char arr_2 [24] ;
unsigned int arr_7 [16] [16] ;
unsigned long long int arr_10 [16] ;
short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 3457651741U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 16159657690329552129ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)22560 : (short)-7822;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
