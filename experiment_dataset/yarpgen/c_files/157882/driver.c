#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1225382994;
unsigned int var_4 = 2487272785U;
int var_5 = -2059618794;
unsigned long long int var_7 = 7233324230687848245ULL;
unsigned int var_8 = 239492185U;
unsigned long long int var_10 = 16192391087047794153ULL;
signed char var_12 = (signed char)6;
int var_13 = -764191889;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 14995340090945136284ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2148667496U;
signed char var_23 = (signed char)82;
_Bool arr_0 [17] ;
unsigned int arr_3 [17] ;
int arr_4 [17] ;
int arr_7 [17] ;
_Bool arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4276954461U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2145424028;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -17967165;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
