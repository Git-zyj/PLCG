#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
int var_2 = -207655364;
int var_5 = -703389651;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)53753;
unsigned int var_8 = 43859572U;
signed char var_9 = (signed char)100;
unsigned long long int var_10 = 6103222650640943752ULL;
int zero = 0;
short var_11 = (short)10867;
int var_12 = -1128077332;
unsigned long long int var_13 = 14256741104865098231ULL;
int var_14 = -469267249;
signed char var_15 = (signed char)18;
_Bool var_16 = (_Bool)1;
unsigned long long int arr_0 [17] ;
long long int arr_2 [17] [17] [17] ;
unsigned long long int arr_3 [17] ;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1316833985663403218ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5092738409656483047LL : -2748796994596319029LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 16031308461334296689ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)6510 : (short)10808;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
