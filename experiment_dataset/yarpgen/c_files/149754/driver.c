#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6054;
signed char var_3 = (signed char)-49;
long long int var_4 = -7542881443787121984LL;
signed char var_6 = (signed char)86;
short var_9 = (short)-18510;
int zero = 0;
signed char var_10 = (signed char)33;
signed char var_11 = (signed char)17;
unsigned long long int var_12 = 12282938136358212117ULL;
unsigned int var_13 = 3463418408U;
short var_14 = (short)-30160;
unsigned int arr_0 [21] [21] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3195485217U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 8395233811123990139LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
