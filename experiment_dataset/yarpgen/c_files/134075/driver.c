#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3781019886848760685LL;
unsigned int var_4 = 3390702385U;
signed char var_7 = (signed char)-2;
unsigned short var_8 = (unsigned short)15041;
int zero = 0;
unsigned short var_10 = (unsigned short)58244;
unsigned short var_11 = (unsigned short)55888;
unsigned int var_12 = 3081853108U;
unsigned char var_13 = (unsigned char)201;
long long int var_14 = -5386387752160822853LL;
unsigned int arr_2 [22] ;
long long int arr_4 [22] [22] [22] ;
unsigned short arr_5 [22] ;
unsigned short arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2216280318U : 163292989U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3988454708466186375LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)58657;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)21262;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
