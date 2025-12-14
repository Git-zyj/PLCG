#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_15 = (short)8592;
long long int var_16 = 8983857223495552362LL;
unsigned short var_17 = (unsigned short)7823;
unsigned char var_18 = (unsigned char)210;
unsigned long long int var_19 = 1770967318527027280ULL;
unsigned long long int arr_3 [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] [10] ;
long long int arr_9 [14] ;
unsigned long long int arr_10 [14] ;
unsigned char arr_11 [14] ;
unsigned long long int arr_12 [14] ;
unsigned long long int arr_13 [14] ;
short arr_14 [14] ;
int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 12175093831259446682ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 16189600079261937447ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 4416310830155842392LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 17812418743593098075ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 9300048374885710522ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 2453856450537289654ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (short)12215;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 1505050124;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
