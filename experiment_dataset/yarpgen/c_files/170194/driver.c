#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)74;
signed char var_5 = (signed char)-113;
int var_8 = 966738486;
unsigned long long int var_10 = 18334582301138588025ULL;
int zero = 0;
signed char var_14 = (signed char)94;
unsigned long long int var_15 = 5771703090214423786ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2477778010U;
int var_19 = 1792075850;
short var_20 = (short)13957;
int var_21 = -337818062;
unsigned short var_22 = (unsigned short)22880;
unsigned int arr_1 [20] ;
signed char arr_2 [20] [20] ;
short arr_4 [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3554326018U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-4438;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)53365;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
