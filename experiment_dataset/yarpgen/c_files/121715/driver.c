#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6314916465538403603ULL;
unsigned int var_2 = 3844596821U;
unsigned char var_3 = (unsigned char)253;
long long int var_4 = 2091506701083475113LL;
unsigned long long int var_6 = 7942953957194813417ULL;
unsigned long long int var_7 = 8585149004793120065ULL;
unsigned long long int var_11 = 5072980011115796475ULL;
unsigned int var_13 = 1602299605U;
long long int var_15 = -3931914412132049921LL;
unsigned int var_16 = 2419466438U;
int zero = 0;
long long int var_18 = 8373198751902328051LL;
unsigned char var_19 = (unsigned char)45;
unsigned int var_20 = 652932049U;
unsigned long long int var_21 = 17301748186006755748ULL;
unsigned int var_22 = 188822922U;
unsigned int var_23 = 2445315161U;
long long int arr_4 [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned char arr_6 [18] ;
unsigned int arr_7 [18] [18] [18] [18] ;
long long int arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 8976813724742984757LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 8344045375495264827ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3807636031U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 921600074083417243LL : -5317684035561730455LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
