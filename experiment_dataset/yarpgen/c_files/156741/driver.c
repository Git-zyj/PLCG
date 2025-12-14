#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned int var_4 = 3525256580U;
unsigned int var_7 = 3374320085U;
signed char var_8 = (signed char)-97;
unsigned int var_9 = 3800135932U;
signed char var_10 = (signed char)-83;
signed char var_11 = (signed char)91;
int zero = 0;
unsigned int var_15 = 976328399U;
unsigned int var_16 = 1527094945U;
unsigned int var_17 = 644615729U;
signed char var_18 = (signed char)-8;
signed char var_19 = (signed char)103;
signed char var_20 = (signed char)14;
unsigned int arr_0 [12] [12] ;
signed char arr_7 [12] ;
signed char arr_4 [12] [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 699184635U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)5;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
