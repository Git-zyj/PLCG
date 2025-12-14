#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3099971974U;
unsigned long long int var_5 = 6330092190162107068ULL;
short var_8 = (short)15846;
int var_11 = -1509681919;
unsigned long long int var_15 = 758028153528539217ULL;
int zero = 0;
long long int var_16 = -2473795413600457123LL;
signed char var_17 = (signed char)94;
unsigned int var_18 = 82483282U;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_5 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 16521520798062025040ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 12773888637177350362ULL : 4342632519111521379ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
