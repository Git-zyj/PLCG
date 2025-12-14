#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4114974328U;
unsigned int var_6 = 2682236569U;
unsigned int var_7 = 3474462952U;
unsigned int var_8 = 524361591U;
unsigned int var_9 = 307530111U;
int zero = 0;
unsigned int var_15 = 2264368947U;
unsigned int var_16 = 1602036939U;
unsigned int var_17 = 1305652149U;
unsigned int var_18 = 3800281535U;
unsigned int var_19 = 1019016113U;
unsigned int var_20 = 1542575803U;
unsigned int arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] [10] [10] ;
unsigned int arr_5 [10] [10] ;
unsigned int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 11004003U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2206006214U : 2097697666U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1748427942U : 2704223279U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 1098888149U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1995462369U : 3451808713U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
