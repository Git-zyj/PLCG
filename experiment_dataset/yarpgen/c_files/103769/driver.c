#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8354635128113739210LL;
signed char var_1 = (signed char)41;
signed char var_4 = (signed char)-123;
unsigned int var_5 = 3558179467U;
unsigned long long int var_6 = 9202755276009021704ULL;
int var_8 = -1935712159;
unsigned long long int var_9 = 1799438237997531445ULL;
unsigned int var_10 = 2884062550U;
int var_14 = 1268323066;
unsigned int var_17 = 407774098U;
int zero = 0;
int var_18 = -960491731;
long long int var_19 = 2033707812538825436LL;
short var_20 = (short)31275;
long long int var_21 = 278409653327378223LL;
unsigned int arr_0 [23] ;
int arr_2 [23] ;
int arr_3 [23] [23] [23] ;
unsigned int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1885499637U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1881926351;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1582846491;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1034569855U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
