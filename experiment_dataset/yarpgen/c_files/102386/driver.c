#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
int var_1 = 553452471;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15709942559588357183ULL;
unsigned char var_7 = (unsigned char)34;
int var_8 = 2021939735;
long long int var_9 = -5580404371113911672LL;
unsigned long long int var_10 = 8389472356861229347ULL;
unsigned short var_12 = (unsigned short)25214;
int zero = 0;
short var_13 = (short)-9030;
unsigned short var_14 = (unsigned short)42652;
short var_15 = (short)23347;
unsigned int var_16 = 44217472U;
unsigned long long int var_17 = 1331205984970157569ULL;
unsigned short var_18 = (unsigned short)24116;
unsigned int arr_5 [18] ;
unsigned long long int arr_13 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1043824151U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 6031526348042824853ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
