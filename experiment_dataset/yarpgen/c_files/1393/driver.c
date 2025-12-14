#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-4;
long long int var_8 = -3539508212428281809LL;
unsigned long long int var_12 = 8832376197709851421ULL;
long long int var_15 = -1292713582773403627LL;
int zero = 0;
unsigned int var_20 = 3176691484U;
int var_21 = 2025994485;
long long int var_22 = -6427267831309265139LL;
unsigned long long int var_23 = 13873794816647046948ULL;
int var_24 = -1453969526;
unsigned int arr_1 [18] ;
unsigned short arr_2 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3498750434U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)58350;
}

void checksum() {
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
