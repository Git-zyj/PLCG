#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7528568834001509739LL;
unsigned long long int var_8 = 5524647327601007546ULL;
short var_9 = (short)-27302;
short var_10 = (short)-19719;
unsigned char var_16 = (unsigned char)48;
int var_17 = -174304144;
int var_18 = -1713459427;
int zero = 0;
unsigned long long int var_19 = 10339696350988099949ULL;
unsigned int var_20 = 482840508U;
unsigned char var_21 = (unsigned char)59;
unsigned char var_22 = (unsigned char)58;
unsigned int var_23 = 2480415065U;
int arr_0 [23] ;
long long int arr_1 [23] ;
short arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 906710564;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6063508806571446031LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)23;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
