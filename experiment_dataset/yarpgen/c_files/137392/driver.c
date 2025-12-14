#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7377262509339668603LL;
long long int var_1 = 3524097951727361240LL;
unsigned short var_2 = (unsigned short)25998;
short var_3 = (short)-24578;
unsigned char var_4 = (unsigned char)25;
unsigned int var_5 = 3366885186U;
unsigned int var_6 = 4093131819U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)41;
unsigned char var_9 = (unsigned char)65;
int zero = 0;
unsigned short var_10 = (unsigned short)50628;
signed char var_11 = (signed char)-94;
unsigned long long int var_12 = 2589989742433838474ULL;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2233166603380277779ULL : 5096998722255411251ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
