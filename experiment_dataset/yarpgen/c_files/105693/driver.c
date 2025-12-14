#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
signed char var_4 = (signed char)(-127 - 1);
int var_5 = -489809355;
signed char var_6 = (signed char)-13;
unsigned long long int var_8 = 2240032551825183402ULL;
int zero = 0;
signed char var_10 = (signed char)-78;
int var_11 = -1366718281;
unsigned long long int var_12 = 13501585574486470993ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)13506;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8314090723454432530ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 1301454024;
unsigned long long int arr_2 [25] [25] [25] ;
signed char arr_3 [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
signed char arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9212329293655307674ULL : 3245942624302118920ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)71 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6962946649599775508ULL : 17325255714647557986ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-116;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
