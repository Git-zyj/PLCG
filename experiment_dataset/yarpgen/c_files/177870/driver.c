#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4616284987172869166ULL;
unsigned int var_3 = 3167484609U;
unsigned int var_5 = 2866184884U;
long long int var_6 = 4176181876563024857LL;
unsigned short var_8 = (unsigned short)14422;
short var_9 = (short)24821;
long long int var_11 = -8886764478107295116LL;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)589;
signed char var_15 = (signed char)114;
short var_16 = (short)-24192;
int zero = 0;
signed char var_17 = (signed char)65;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2583129885U;
short var_20 = (short)27779;
short var_21 = (short)19166;
signed char var_22 = (signed char)-5;
long long int arr_1 [11] [11] ;
_Bool arr_3 [12] ;
unsigned int arr_2 [11] [11] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 7686154504868546861LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3256070133U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1467367716244125694ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
