#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1658588791;
unsigned long long int var_1 = 4553754804784892347ULL;
int var_2 = -79454374;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 249949682U;
long long int var_8 = 8598461930390589713LL;
long long int var_9 = -4291505781256623383LL;
unsigned short var_13 = (unsigned short)274;
int var_15 = 272086787;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = 2251478583738475285LL;
unsigned short var_20 = (unsigned short)14898;
unsigned int var_21 = 2253087155U;
unsigned int var_22 = 1750283690U;
unsigned short arr_5 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)41224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2010312267U : 4063241176U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
