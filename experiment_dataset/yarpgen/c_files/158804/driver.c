#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21367;
unsigned int var_2 = 938033291U;
unsigned long long int var_3 = 12443466388728521634ULL;
signed char var_5 = (signed char)92;
int var_7 = 1348359008;
unsigned short var_8 = (unsigned short)64663;
signed char var_11 = (signed char)-51;
int zero = 0;
int var_12 = -1965213573;
unsigned short var_13 = (unsigned short)45155;
short var_14 = (short)21081;
long long int arr_2 [18] [18] [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -4948859301865126985LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)76;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
