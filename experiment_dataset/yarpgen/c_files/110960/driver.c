#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4554197787519944641ULL;
signed char var_2 = (signed char)30;
unsigned long long int var_5 = 11773094325269661426ULL;
unsigned char var_7 = (unsigned char)136;
unsigned long long int var_9 = 7149475933285640966ULL;
unsigned long long int var_10 = 16997276114652789540ULL;
unsigned int var_11 = 1168924897U;
int zero = 0;
int var_14 = -1413280206;
long long int var_15 = -6181248010144083402LL;
long long int var_16 = 6367117761370486609LL;
int var_17 = -230753524;
int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
long long int arr_2 [19] [19] [19] ;
unsigned long long int arr_3 [19] ;
_Bool arr_5 [19] ;
unsigned int arr_6 [19] ;
long long int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -355981297;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17097327185763728723ULL : 5899545360465568920ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -7926600679821011726LL : 7449028268124898811LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2080811091266956875ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3124416449U : 2412487718U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4879364085926487704LL : 1822963493381186023LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
