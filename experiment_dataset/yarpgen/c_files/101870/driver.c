#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38185;
long long int var_6 = 6191186991713273731LL;
unsigned char var_8 = (unsigned char)233;
signed char var_10 = (signed char)-119;
unsigned short var_11 = (unsigned short)63005;
int zero = 0;
signed char var_12 = (signed char)45;
signed char var_13 = (signed char)119;
unsigned char var_14 = (unsigned char)182;
signed char var_15 = (signed char)-34;
signed char arr_2 [10] [10] [10] ;
int arr_9 [10] ;
signed char arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -1265076070;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)-104;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
