#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26785;
unsigned int var_4 = 1396782707U;
unsigned long long int var_8 = 11852686418029608175ULL;
long long int var_11 = -2665462981245268144LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)225;
short var_15 = (short)8742;
short var_16 = (short)27794;
int var_17 = 499545887;
short arr_0 [20] ;
signed char arr_1 [20] ;
int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)27675;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -417605823;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
