#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
signed char var_4 = (signed char)72;
signed char var_5 = (signed char)44;
signed char var_7 = (signed char)7;
signed char var_9 = (signed char)-22;
signed char var_13 = (signed char)-76;
signed char var_14 = (signed char)-65;
signed char var_15 = (signed char)29;
signed char var_18 = (signed char)38;
int zero = 0;
signed char var_20 = (signed char)-60;
signed char var_21 = (signed char)75;
signed char var_22 = (signed char)26;
signed char var_23 = (signed char)101;
signed char var_24 = (signed char)78;
signed char var_25 = (signed char)21;
signed char var_26 = (signed char)24;
signed char var_27 = (signed char)67;
signed char var_28 = (signed char)5;
signed char arr_0 [15] ;
signed char arr_2 [15] ;
signed char arr_5 [15] [15] [15] [15] ;
signed char arr_12 [23] [23] ;
signed char arr_10 [10] ;
signed char arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)-126;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
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
