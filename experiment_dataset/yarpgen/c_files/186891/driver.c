#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-20628;
short var_6 = (short)-9322;
short var_7 = (short)27448;
short var_9 = (short)15686;
short var_11 = (short)-236;
short var_14 = (short)-13689;
int zero = 0;
short var_18 = (short)11137;
short var_19 = (short)-13833;
short var_20 = (short)-25577;
short var_21 = (short)-766;
short var_22 = (short)-29699;
short var_23 = (short)8743;
short var_24 = (short)-25153;
short var_25 = (short)18929;
short arr_0 [23] [23] ;
short arr_3 [23] ;
short arr_5 [23] [23] [23] [23] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)31975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-26778;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)26131 : (short)11426;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
