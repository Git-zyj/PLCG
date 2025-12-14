#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-29;
unsigned char var_5 = (unsigned char)137;
unsigned char var_6 = (unsigned char)185;
unsigned long long int var_7 = 15272806798159040417ULL;
unsigned short var_8 = (unsigned short)2163;
long long int var_9 = -8714793830811486871LL;
long long int var_10 = 2713208281674963287LL;
int zero = 0;
unsigned char var_11 = (unsigned char)15;
unsigned char var_12 = (unsigned char)170;
short var_13 = (short)-113;
short var_14 = (short)-19933;
unsigned long long int var_15 = 13894153935681834169ULL;
long long int arr_0 [11] ;
unsigned int arr_3 [11] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -8811187140688803013LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2035247162U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)12910;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
