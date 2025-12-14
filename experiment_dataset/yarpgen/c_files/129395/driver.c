#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2061352912541174931LL;
long long int var_3 = 3162776310739197248LL;
unsigned int var_6 = 247466042U;
int var_7 = -1298601797;
unsigned int var_10 = 4017802834U;
short var_11 = (short)-24893;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
unsigned long long int var_13 = 15269591723187080153ULL;
int var_14 = -1426707184;
short var_15 = (short)-27308;
int var_16 = 443609967;
unsigned int var_17 = 1801320809U;
unsigned int arr_0 [25] ;
signed char arr_1 [25] [25] ;
short arr_2 [25] [25] ;
signed char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3487649203U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-17312;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-76;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
