#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6469461634350520327LL;
unsigned char var_1 = (unsigned char)49;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1615433301U;
signed char var_20 = (signed char)-9;
unsigned int var_21 = 2181656582U;
signed char var_22 = (signed char)77;
short var_23 = (short)-13917;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_1 [12] ;
signed char arr_3 [11] ;
_Bool arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4998443467088139861ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
