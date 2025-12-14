#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned char var_2 = (unsigned char)246;
unsigned int var_7 = 1042784713U;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
unsigned short var_14 = (unsigned short)41301;
signed char var_15 = (signed char)125;
unsigned char var_16 = (unsigned char)174;
unsigned long long int var_17 = 15103487903780641060ULL;
unsigned char var_18 = (unsigned char)123;
unsigned long long int var_19 = 13051392688738745799ULL;
unsigned int arr_3 [19] ;
unsigned char arr_4 [19] ;
unsigned int arr_5 [19] ;
unsigned char arr_12 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1982281240U : 1149759882U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 638156378U : 678857531U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)225;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
