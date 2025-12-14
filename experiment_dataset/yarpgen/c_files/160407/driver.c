#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3811378503U;
unsigned long long int var_1 = 18192810943962960064ULL;
short var_2 = (short)-3153;
long long int var_4 = 4085856446646224494LL;
int var_5 = 960421008;
long long int var_6 = 5862403581076826242LL;
long long int var_9 = -3484888226595350068LL;
long long int var_10 = -5762023558837234686LL;
unsigned long long int var_15 = 3540371255143256016ULL;
signed char var_17 = (signed char)-40;
int zero = 0;
int var_19 = -1761928752;
signed char var_20 = (signed char)-86;
signed char var_21 = (signed char)44;
int var_22 = 484163090;
_Bool var_23 = (_Bool)0;
short var_24 = (short)7539;
short var_25 = (short)-24989;
short arr_0 [25] ;
short arr_2 [25] [25] [25] ;
unsigned int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-4041;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-21926;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1063719425U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
