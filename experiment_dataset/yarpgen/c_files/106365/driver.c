#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1403012309609190771LL;
unsigned long long int var_1 = 16295002479678162893ULL;
signed char var_3 = (signed char)124;
short var_4 = (short)30026;
long long int var_5 = -6459238139385090555LL;
short var_7 = (short)29904;
int var_10 = -218134289;
short var_11 = (short)-11189;
signed char var_12 = (signed char)17;
int zero = 0;
unsigned short var_14 = (unsigned short)9359;
signed char var_15 = (signed char)79;
unsigned long long int var_16 = 10910520186247608865ULL;
signed char var_17 = (signed char)36;
signed char arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
