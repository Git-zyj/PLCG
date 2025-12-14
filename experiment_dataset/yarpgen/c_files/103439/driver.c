#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
signed char var_4 = (signed char)93;
signed char var_5 = (signed char)-73;
signed char var_6 = (signed char)74;
signed char var_8 = (signed char)57;
unsigned char var_11 = (unsigned char)68;
signed char var_15 = (signed char)124;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
signed char var_20 = (signed char)109;
unsigned char var_21 = (unsigned char)237;
unsigned char var_22 = (unsigned char)94;
signed char var_23 = (signed char)-22;
unsigned char var_24 = (unsigned char)64;
signed char var_25 = (signed char)88;
signed char var_26 = (signed char)-85;
signed char var_27 = (signed char)-108;
signed char var_28 = (signed char)-99;
unsigned char var_29 = (unsigned char)169;
unsigned char arr_1 [15] ;
unsigned char arr_2 [23] [23] ;
unsigned char arr_12 [23] [23] [23] ;
unsigned char arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
