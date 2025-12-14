#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15776447522592827909ULL;
unsigned int var_1 = 3949496190U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_8 = 684443054;
signed char var_9 = (signed char)6;
int zero = 0;
signed char var_10 = (signed char)-37;
unsigned long long int var_11 = 10569629054696013384ULL;
unsigned long long int var_12 = 5611055162023574987ULL;
unsigned short var_13 = (unsigned short)47323;
long long int var_14 = 5574537153299036398LL;
long long int var_15 = 2193004023777612770LL;
unsigned long long int var_16 = 1356055474898110661ULL;
unsigned long long int var_17 = 3777773797209354493ULL;
short arr_0 [18] ;
unsigned int arr_3 [18] ;
unsigned long long int arr_7 [18] ;
unsigned long long int arr_10 [24] [24] ;
int arr_13 [24] ;
_Bool arr_8 [18] ;
_Bool arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-26151;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2078654719U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 12604698828294401087ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 12688580824209243699ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 925579307;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
