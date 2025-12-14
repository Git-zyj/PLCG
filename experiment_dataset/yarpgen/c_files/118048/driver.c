#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned char var_1 = (unsigned char)196;
long long int var_2 = 5651454963782597599LL;
short var_4 = (short)-30961;
signed char var_5 = (signed char)-27;
long long int var_6 = -7127024861664982904LL;
_Bool var_8 = (_Bool)1;
long long int var_11 = 681344683137883591LL;
long long int var_12 = 3107604909689826249LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)34;
unsigned long long int var_15 = 7080951375877838738ULL;
short var_16 = (short)8755;
signed char var_17 = (signed char)98;
short var_18 = (short)539;
unsigned long long int var_19 = 8610211685879482486ULL;
short var_20 = (short)-1690;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-32;
unsigned int var_23 = 1713891513U;
short var_24 = (short)15250;
long long int var_25 = 2714103577416049998LL;
short arr_2 [19] ;
int arr_4 [19] ;
signed char arr_5 [19] [19] [19] ;
signed char arr_6 [19] [19] ;
short arr_11 [15] ;
long long int arr_13 [15] ;
unsigned long long int arr_14 [20] [20] ;
unsigned int arr_15 [20] ;
unsigned long long int arr_7 [19] ;
int arr_8 [19] ;
long long int arr_16 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)25128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1223876462;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-7 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)-10957;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 2475646325150415697LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 5114554112912431249ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 1843817630U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 10805733076735579065ULL : 15297510704497922961ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1682771867 : 1628017589;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -8787202160236742149LL : 6163167970417536567LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
