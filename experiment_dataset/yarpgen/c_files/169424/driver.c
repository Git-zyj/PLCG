#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
int var_2 = 203259533;
short var_4 = (short)28994;
signed char var_7 = (signed char)-30;
signed char var_8 = (signed char)43;
unsigned long long int var_10 = 16654593654667465118ULL;
signed char var_12 = (signed char)-70;
short var_15 = (short)15552;
unsigned int var_18 = 1209159688U;
int zero = 0;
signed char var_20 = (signed char)35;
unsigned long long int var_21 = 15149258510688253607ULL;
unsigned char var_22 = (unsigned char)191;
unsigned long long int var_23 = 4932996540575964545ULL;
signed char var_24 = (signed char)45;
unsigned long long int arr_1 [10] ;
_Bool arr_2 [10] [10] ;
signed char arr_3 [10] ;
unsigned long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3582831936594454868ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 17115866946289597342ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
