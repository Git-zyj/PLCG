#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3594900154698363605ULL;
_Bool var_11 = (_Bool)0;
int var_17 = -1105104732;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8442513282422690076ULL;
int var_21 = -715427048;
unsigned int var_22 = 1588806760U;
unsigned short var_23 = (unsigned short)51636;
int var_24 = 124747856;
int arr_0 [18] ;
short arr_1 [18] [18] ;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -342779868;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)32604;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
