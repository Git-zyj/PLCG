#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 7404987642885606728ULL;
unsigned int var_11 = 4021004797U;
unsigned long long int var_17 = 6058178583521271556ULL;
unsigned char var_19 = (unsigned char)36;
int zero = 0;
unsigned int var_20 = 1235558790U;
signed char var_21 = (signed char)36;
long long int var_22 = 2105912367867484421LL;
unsigned char var_23 = (unsigned char)161;
unsigned long long int var_24 = 8078252549824264639ULL;
unsigned int arr_3 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 688682513U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2769961727864538436ULL : 8156019407912435169ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2619326991U : 3039401926U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
