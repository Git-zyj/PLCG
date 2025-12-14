#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2655130293U;
unsigned char var_5 = (unsigned char)56;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)-11213;
unsigned long long int var_11 = 13047550266602802408ULL;
int var_12 = 767570769;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 196555378U;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
short arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
int arr_6 [18] [18] [18] ;
int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9814775086932239015ULL : 6011690723021160658ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1262106282;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-24378;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 12111505614544721969ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 14260942562438695248ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1272447510;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 236527103 : -35393547;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
