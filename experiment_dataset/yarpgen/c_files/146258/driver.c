#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6863009992044289948LL;
unsigned int var_8 = 4223524120U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 4361129974720283399ULL;
signed char var_20 = (signed char)65;
unsigned long long int var_21 = 16990895250199686656ULL;
long long int var_22 = 6464818680940699637LL;
unsigned int var_23 = 233904647U;
unsigned int var_24 = 2758359226U;
int arr_0 [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2036546070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3090765180983508711ULL;
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
