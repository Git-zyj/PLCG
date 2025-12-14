#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2241873624U;
long long int var_2 = -778663907128498300LL;
unsigned long long int var_5 = 8232809415276861550ULL;
signed char var_9 = (signed char)44;
signed char var_13 = (signed char)91;
long long int var_15 = 7248045073191415279LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10766401235095518547ULL;
int zero = 0;
int var_20 = 16212532;
unsigned long long int var_21 = 6246951364328089267ULL;
unsigned short var_22 = (unsigned short)47652;
unsigned int var_23 = 1300497134U;
_Bool var_24 = (_Bool)0;
unsigned int arr_0 [19] ;
unsigned short arr_2 [19] ;
int arr_3 [19] ;
int arr_4 [19] [19] [19] ;
_Bool arr_5 [19] ;
signed char arr_6 [19] [19] ;
int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 300449422U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)14670;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 916987990 : -440538123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -50227936;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-49 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 839057995 : 634245056;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
