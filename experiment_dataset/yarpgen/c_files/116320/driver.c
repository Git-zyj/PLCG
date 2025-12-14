#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5506731819833568809LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13331249014043888713ULL;
unsigned long long int var_3 = 7110143236803016565ULL;
signed char var_4 = (signed char)93;
int var_5 = 1447846269;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12908501777484425755ULL;
int var_8 = -1979051423;
short var_9 = (short)-29268;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12227632870905151031ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1665333361398907511ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8231575280005490709ULL;
signed char arr_1 [24] ;
int arr_3 [24] [24] [24] ;
_Bool arr_4 [24] ;
int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2086243578;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 1717749228;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
