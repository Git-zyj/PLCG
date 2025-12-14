#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1767094535;
unsigned short var_4 = (unsigned short)56736;
long long int var_6 = -9191937274790190914LL;
long long int var_7 = 7745425642060919517LL;
unsigned short var_8 = (unsigned short)39006;
int var_11 = 1165847603;
unsigned int var_15 = 4063297330U;
signed char var_17 = (signed char)117;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-79;
unsigned short var_20 = (unsigned short)1385;
_Bool var_21 = (_Bool)0;
int arr_1 [14] ;
unsigned int arr_2 [14] ;
_Bool arr_3 [14] ;
long long int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1289369801;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2252350117U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2175459313425086563LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
