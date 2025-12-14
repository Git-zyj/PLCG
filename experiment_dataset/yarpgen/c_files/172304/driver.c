#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3123283372U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2523280202U;
unsigned short var_4 = (unsigned short)23671;
short var_7 = (short)14590;
unsigned long long int var_10 = 13883177273133670219ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-118;
unsigned int var_14 = 189823412U;
long long int var_15 = 221827715779974879LL;
unsigned int var_17 = 3050936129U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -3663885050512394170LL;
int var_21 = 374411908;
signed char var_22 = (signed char)56;
unsigned long long int var_23 = 16783001377152364576ULL;
_Bool arr_5 [20] [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3780193296U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
