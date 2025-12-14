#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
signed char var_4 = (signed char)-119;
signed char var_5 = (signed char)120;
signed char var_7 = (signed char)9;
signed char var_8 = (signed char)96;
signed char var_10 = (signed char)-24;
signed char var_11 = (signed char)-11;
signed char var_14 = (signed char)-20;
signed char var_15 = (signed char)-110;
signed char var_16 = (signed char)-71;
int zero = 0;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)-94;
signed char var_19 = (signed char)-33;
signed char var_20 = (signed char)-87;
signed char var_21 = (signed char)68;
signed char arr_1 [19] ;
signed char arr_2 [19] ;
signed char arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)70;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
