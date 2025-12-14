#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11915310051206335013ULL;
long long int var_3 = 1569024644254330951LL;
unsigned int var_5 = 199506310U;
short var_6 = (short)-12151;
unsigned short var_8 = (unsigned short)24902;
unsigned char var_10 = (unsigned char)17;
int zero = 0;
unsigned char var_11 = (unsigned char)245;
long long int var_12 = 162028512209681829LL;
unsigned short var_13 = (unsigned short)58587;
int var_14 = -437190933;
unsigned short var_15 = (unsigned short)28866;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5196421075638904788LL;
short arr_1 [10] ;
_Bool arr_2 [10] [10] ;
short arr_3 [10] ;
unsigned long long int arr_4 [10] ;
unsigned short arr_5 [10] [10] ;
unsigned short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-2766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)2596;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1440081890892423561ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)40151;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20401 : (unsigned short)9117;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
