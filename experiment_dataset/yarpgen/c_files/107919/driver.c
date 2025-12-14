#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2131586404;
int var_3 = 380202752;
int var_4 = -31294070;
int var_6 = -998368569;
int var_7 = -1286616052;
int var_8 = -1349586960;
int var_10 = 1014279310;
int var_11 = 305898538;
int var_12 = -734132095;
int var_13 = 681858839;
int var_14 = 833037714;
int var_15 = -972451547;
int var_16 = 1505730648;
int zero = 0;
int var_17 = 158049420;
int var_18 = 500866544;
int var_19 = -827310921;
int var_20 = 443373273;
int var_21 = -1939129403;
int arr_1 [20] ;
int arr_2 [20] [20] ;
int arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 647985177;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -1548509582;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -358153499;
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
