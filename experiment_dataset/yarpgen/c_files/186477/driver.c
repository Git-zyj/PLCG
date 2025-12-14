#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
int var_1 = 257713144;
signed char var_2 = (signed char)70;
long long int var_3 = -2092523106893610108LL;
short var_4 = (short)2037;
short var_5 = (short)-8831;
unsigned char var_6 = (unsigned char)188;
long long int var_8 = -8298191392815481418LL;
unsigned long long int var_9 = 622696918892140051ULL;
unsigned int var_10 = 1350930982U;
int zero = 0;
unsigned short var_12 = (unsigned short)23657;
unsigned long long int var_13 = 3855495688421509655ULL;
long long int var_14 = 7617078664736612014LL;
unsigned long long int var_15 = 13764433041938917326ULL;
unsigned long long int arr_4 [10] [10] [10] ;
signed char arr_5 [10] ;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7000638035683767380ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
