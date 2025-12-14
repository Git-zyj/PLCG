#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
signed char var_3 = (signed char)80;
long long int var_4 = 6154493692099260164LL;
long long int var_9 = -3424189319360132501LL;
signed char var_10 = (signed char)-97;
signed char var_14 = (signed char)-84;
signed char var_18 = (signed char)27;
int zero = 0;
short var_19 = (short)-9530;
unsigned int var_20 = 98405597U;
short var_21 = (short)-3813;
unsigned short var_22 = (unsigned short)24186;
unsigned long long int var_23 = 8707704474715211277ULL;
long long int var_24 = -2401855655441580655LL;
signed char arr_1 [25] ;
signed char arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 17075294526682759219ULL;
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
