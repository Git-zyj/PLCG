#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
unsigned char var_7 = (unsigned char)184;
unsigned char var_10 = (unsigned char)254;
unsigned char var_12 = (unsigned char)75;
unsigned char var_13 = (unsigned char)112;
unsigned char var_14 = (unsigned char)190;
unsigned char var_15 = (unsigned char)123;
unsigned char var_16 = (unsigned char)96;
unsigned char var_18 = (unsigned char)195;
int zero = 0;
unsigned char var_19 = (unsigned char)95;
unsigned char var_20 = (unsigned char)175;
unsigned char var_21 = (unsigned char)11;
unsigned char var_22 = (unsigned char)233;
unsigned char var_23 = (unsigned char)36;
unsigned char arr_4 [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
unsigned char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)83 : (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)174;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
