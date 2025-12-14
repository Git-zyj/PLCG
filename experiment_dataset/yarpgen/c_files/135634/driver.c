#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 656535875U;
unsigned int var_8 = 1403070086U;
unsigned int var_9 = 945843144U;
unsigned int var_12 = 2517373987U;
unsigned int var_13 = 565359359U;
unsigned int var_15 = 2228269061U;
int zero = 0;
unsigned int var_17 = 2286110653U;
unsigned int var_18 = 964994400U;
unsigned int var_19 = 1910872461U;
unsigned int var_20 = 903760379U;
unsigned int var_21 = 291756474U;
unsigned int var_22 = 316900964U;
unsigned int var_23 = 1073217074U;
unsigned int var_24 = 542613289U;
unsigned int var_25 = 1338499516U;
unsigned int arr_1 [12] [12] ;
unsigned int arr_11 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 253112468U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 248126719U;
}

void checksum() {
    hash(&seed, var_17);
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
