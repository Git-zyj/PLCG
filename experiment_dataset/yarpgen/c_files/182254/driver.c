#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 709810987;
unsigned int var_3 = 176059804U;
short var_4 = (short)-26424;
unsigned int var_5 = 3870132856U;
unsigned int var_6 = 562659214U;
_Bool var_7 = (_Bool)1;
long long int var_9 = -6172529472148956442LL;
int zero = 0;
unsigned short var_10 = (unsigned short)55353;
unsigned int var_11 = 3579767074U;
int var_12 = 846494132;
unsigned short var_13 = (unsigned short)50315;
unsigned short arr_2 [16] ;
unsigned int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)3549;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 85587191U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
