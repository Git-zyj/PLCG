#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)218;
unsigned char var_9 = (unsigned char)165;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
signed char var_11 = (signed char)12;
unsigned int var_12 = 3632208024U;
unsigned long long int var_13 = 13095447806258294083ULL;
signed char var_14 = (signed char)-107;
unsigned int var_15 = 4132592209U;
unsigned long long int var_16 = 17592184639637797610ULL;
unsigned int var_17 = 3828323253U;
unsigned char arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_2 [16] [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)46933;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 651869645741883813LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-25332;
}

void checksum() {
    hash(&seed, var_11);
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
