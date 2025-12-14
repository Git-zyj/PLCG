#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7758943920278267309LL;
long long int var_1 = -5359857230570447913LL;
long long int var_5 = 2556338240279608515LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6640445915712188393LL;
unsigned long long int var_10 = 11076023121252277295ULL;
unsigned short var_12 = (unsigned short)11842;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-107;
long long int var_15 = 8143975203964760547LL;
unsigned int var_16 = 3587616875U;
long long int arr_7 [15] [15] ;
unsigned long long int arr_12 [17] ;
int arr_13 [17] ;
int arr_10 [15] ;
int arr_11 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 8934443371815149603LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 2813089677973952260ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = -607029441;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 861305157;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -1992104317;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
