#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15327885137785105507ULL;
unsigned long long int var_7 = 12491547796602619915ULL;
unsigned long long int var_8 = 4978686948362521436ULL;
unsigned long long int var_13 = 12763237769658687259ULL;
int var_14 = -93845837;
unsigned char var_16 = (unsigned char)235;
unsigned int var_17 = 2114674148U;
unsigned char var_19 = (unsigned char)154;
int zero = 0;
int var_20 = 1933631866;
unsigned long long int var_21 = 661323938744144755ULL;
long long int var_22 = 9216348906005464574LL;
unsigned long long int var_23 = 2021232508056924831ULL;
int var_24 = 624993455;
unsigned int var_25 = 2342313458U;
unsigned long long int arr_0 [23] ;
int arr_2 [23] [23] ;
signed char arr_3 [23] ;
int arr_4 [23] [23] ;
signed char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 14367454483616457034ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1619840444;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1855231114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)93;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
