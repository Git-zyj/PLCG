#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2412175239U;
short var_3 = (short)14143;
long long int var_4 = 142914190330954060LL;
signed char var_5 = (signed char)-116;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17840807983003163299ULL;
unsigned int var_9 = 361578104U;
int zero = 0;
unsigned short var_10 = (unsigned short)18906;
signed char var_11 = (signed char)-38;
unsigned short var_12 = (unsigned short)52447;
unsigned long long int var_13 = 6034920420665779082ULL;
short var_14 = (short)-17798;
int var_15 = 1473495884;
unsigned char var_16 = (unsigned char)183;
unsigned short arr_1 [19] ;
signed char arr_5 [19] [19] [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)26622;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)19499;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
