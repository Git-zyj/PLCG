#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned int var_1 = 3702422306U;
long long int var_2 = -4794825397443611661LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6038471648206925594LL;
signed char var_5 = (signed char)-84;
unsigned int var_6 = 4134757819U;
unsigned short var_7 = (unsigned short)2866;
signed char var_8 = (signed char)62;
_Bool var_9 = (_Bool)1;
short var_11 = (short)27562;
int zero = 0;
unsigned short var_12 = (unsigned short)8492;
short var_13 = (short)27724;
unsigned char var_14 = (unsigned char)209;
_Bool var_15 = (_Bool)1;
long long int var_16 = 9142862281208298638LL;
int var_17 = 2100478965;
signed char var_18 = (signed char)45;
unsigned char var_19 = (unsigned char)150;
unsigned short arr_2 [19] ;
signed char arr_15 [18] [18] ;
long long int arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)15980;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 2782411636999514840LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
