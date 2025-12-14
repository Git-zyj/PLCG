#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1175368580039052013ULL;
unsigned long long int var_2 = 684970443354718208ULL;
long long int var_3 = 2237425611227991906LL;
signed char var_7 = (signed char)-105;
unsigned short var_9 = (unsigned short)19342;
int zero = 0;
unsigned long long int var_10 = 5085212717576324077ULL;
unsigned int var_11 = 3345692219U;
long long int var_12 = -8345597047821419539LL;
int var_13 = -1213701984;
unsigned int var_14 = 2819704243U;
int arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
int arr_2 [20] [20] ;
signed char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1836310883;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 974591253U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -979293247;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
