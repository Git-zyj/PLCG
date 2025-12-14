#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17212;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5675353488845582825LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)7550;
unsigned short var_15 = (unsigned short)21494;
signed char var_16 = (signed char)60;
unsigned char var_17 = (unsigned char)46;
short var_18 = (short)3102;
long long int var_19 = 2945478500899401986LL;
short arr_0 [18] ;
long long int arr_1 [18] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-7265;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -3283558088323146914LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2591448100U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
