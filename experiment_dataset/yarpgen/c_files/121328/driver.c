#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7553;
unsigned long long int var_9 = 11615563385440673330ULL;
unsigned short var_10 = (unsigned short)17022;
int zero = 0;
unsigned short var_11 = (unsigned short)63592;
signed char var_12 = (signed char)-22;
signed char var_13 = (signed char)-6;
unsigned int var_14 = 1220528765U;
unsigned short var_15 = (unsigned short)65466;
unsigned char arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 12842323862901715138ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
