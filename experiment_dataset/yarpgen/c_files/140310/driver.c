#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1070290130624732796LL;
long long int var_1 = 2393420402656162819LL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)28029;
unsigned char var_6 = (unsigned char)187;
unsigned long long int var_7 = 12237278538832359723ULL;
int var_8 = -350774716;
signed char var_9 = (signed char)-10;
int var_11 = 485408550;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-7;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)221;
int var_24 = 818023438;
int var_25 = -625373340;
long long int var_26 = 4232390797146134074LL;
unsigned short arr_0 [20] ;
int arr_1 [20] [20] ;
_Bool arr_2 [20] [20] ;
_Bool arr_3 [21] ;
long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)37253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1293820132;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 7974268249182100484LL : -7119783266333706449LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
