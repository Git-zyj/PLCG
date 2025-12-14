#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2221807774U;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)20914;
_Bool var_8 = (_Bool)0;
short var_14 = (short)27684;
int zero = 0;
int var_18 = -1708865403;
unsigned short var_19 = (unsigned short)7632;
unsigned long long int var_20 = 8513228627466082419ULL;
unsigned short var_21 = (unsigned short)21646;
_Bool var_22 = (_Bool)0;
int var_23 = 970428853;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_1 [21] ;
short arr_3 [21] [21] [21] ;
int arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 4144556313358403006ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)15499 : (short)-3774;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 214723317;
}

void checksum() {
    hash(&seed, var_18);
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
