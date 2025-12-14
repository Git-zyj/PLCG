#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4064273395968786155ULL;
short var_1 = (short)-8785;
unsigned int var_2 = 297879600U;
unsigned int var_3 = 140923134U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1296191634U;
signed char var_8 = (signed char)27;
int zero = 0;
short var_10 = (short)-21072;
unsigned int var_11 = 2195993268U;
long long int var_12 = 913310063982259138LL;
signed char var_13 = (signed char)43;
unsigned char var_14 = (unsigned char)1;
long long int arr_1 [21] ;
int arr_2 [21] [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 197597475818609168LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1103787119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -3061847287441031604LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
