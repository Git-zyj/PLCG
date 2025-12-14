#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 811190402U;
signed char var_2 = (signed char)17;
unsigned int var_3 = 280392007U;
unsigned short var_4 = (unsigned short)17305;
unsigned char var_5 = (unsigned char)159;
signed char var_7 = (signed char)4;
int zero = 0;
long long int var_10 = -7624108099917285980LL;
long long int var_11 = -7417295954057860315LL;
unsigned char var_12 = (unsigned char)228;
unsigned int arr_0 [25] [25] ;
long long int arr_1 [25] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3474044826U : 606281597U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7702067557318087386LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1978080033147564373LL : 8898609380338717130LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
