#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -77650992;
short var_2 = (short)13035;
unsigned int var_3 = 846367114U;
unsigned short var_4 = (unsigned short)61018;
unsigned int var_10 = 4195633795U;
int zero = 0;
long long int var_14 = -4492253725049473211LL;
unsigned int var_15 = 2097239227U;
unsigned int var_16 = 1451970771U;
long long int var_17 = -6712788992390681532LL;
signed char var_18 = (signed char)-33;
signed char var_19 = (signed char)-67;
unsigned int var_20 = 1347207478U;
short arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-14898;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1486542106U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)123;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
