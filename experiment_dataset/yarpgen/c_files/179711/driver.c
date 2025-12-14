#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3780804124U;
short var_2 = (short)10297;
unsigned short var_3 = (unsigned short)60993;
unsigned int var_4 = 2676490657U;
signed char var_5 = (signed char)-21;
unsigned int var_7 = 2285274669U;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-35;
int zero = 0;
short var_18 = (short)-11569;
unsigned int var_19 = 2970633157U;
signed char var_20 = (signed char)-104;
unsigned short var_21 = (unsigned short)58883;
long long int arr_1 [17] ;
unsigned int arr_4 [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2568997086351419642LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3811558127U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
