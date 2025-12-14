#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
short var_2 = (short)29751;
unsigned long long int var_4 = 9288574644448556170ULL;
unsigned long long int var_6 = 11691321730243266631ULL;
unsigned long long int var_7 = 18044011809073686838ULL;
int zero = 0;
short var_10 = (short)9343;
unsigned short var_11 = (unsigned short)43633;
unsigned int var_12 = 2741560275U;
long long int var_13 = 8591302306404256525LL;
unsigned short var_14 = (unsigned short)63398;
unsigned short var_15 = (unsigned short)18363;
signed char arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2765120659299942154ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
