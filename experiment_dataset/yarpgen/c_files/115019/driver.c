#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 619378881;
unsigned int var_5 = 3320984721U;
long long int var_6 = -5285909840597397933LL;
unsigned int var_9 = 116625358U;
unsigned long long int var_13 = 16444947851901219326ULL;
int zero = 0;
short var_16 = (short)-3063;
short var_17 = (short)-16079;
signed char var_18 = (signed char)-61;
unsigned short var_19 = (unsigned short)13940;
int var_20 = 307734195;
short arr_3 [11] [11] ;
unsigned char arr_5 [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)1580;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2384555161U;
}

void checksum() {
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
