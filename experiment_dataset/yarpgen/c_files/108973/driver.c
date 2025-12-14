#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29713;
unsigned short var_1 = (unsigned short)14102;
long long int var_2 = 5065992931441588437LL;
unsigned short var_4 = (unsigned short)51549;
int var_5 = -730586242;
unsigned short var_6 = (unsigned short)4345;
unsigned short var_7 = (unsigned short)3922;
long long int var_9 = -2829893469816684430LL;
unsigned short var_11 = (unsigned short)15705;
int zero = 0;
int var_12 = 41950300;
unsigned short var_13 = (unsigned short)14176;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)50018;
unsigned short var_16 = (unsigned short)16278;
short var_17 = (short)9906;
short var_18 = (short)18678;
_Bool arr_2 [13] ;
int arr_4 [13] ;
int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 453523729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -1823126712 : 1942189305;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
