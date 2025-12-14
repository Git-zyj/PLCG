#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17120059982272119189ULL;
short var_2 = (short)24456;
unsigned char var_3 = (unsigned char)83;
unsigned long long int var_4 = 8674369715900734343ULL;
long long int var_5 = 28909280580535461LL;
short var_6 = (short)-22998;
signed char var_8 = (signed char)-21;
signed char var_11 = (signed char)83;
int var_12 = -1011931412;
signed char var_15 = (signed char)43;
int zero = 0;
unsigned long long int var_16 = 3753538789269688869ULL;
unsigned short var_17 = (unsigned short)65273;
signed char var_18 = (signed char)-71;
signed char arr_2 [25] ;
unsigned int arr_3 [25] [25] [25] ;
unsigned short arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3949549990U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)15891;
}

void checksum() {
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
