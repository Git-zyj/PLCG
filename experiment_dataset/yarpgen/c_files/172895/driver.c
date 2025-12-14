#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8932641808369659132LL;
short var_1 = (short)32008;
_Bool var_4 = (_Bool)0;
int var_5 = 683783233;
long long int var_6 = -6150987832811480970LL;
int var_7 = 151990758;
signed char var_9 = (signed char)-55;
int var_10 = -1272776429;
unsigned long long int var_11 = 1764319743616919379ULL;
int zero = 0;
unsigned long long int var_12 = 2752929335638642509ULL;
unsigned short var_13 = (unsigned short)26027;
long long int var_14 = 4134359058912916720LL;
short var_15 = (short)29909;
short var_16 = (short)-17345;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1377652204427799121ULL;
int arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] [24] ;
_Bool arr_9 [24] [24] ;
long long int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1503732665;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37866;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 1144239227U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 12718656558616261939ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1376715291020397521LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
