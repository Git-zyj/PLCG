#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 627635562;
signed char var_3 = (signed char)-121;
unsigned long long int var_4 = 25675303132437035ULL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-29055;
signed char var_10 = (signed char)-4;
long long int var_11 = -5517515733398974125LL;
unsigned short var_12 = (unsigned short)48768;
short var_13 = (short)-15107;
int zero = 0;
int var_14 = -689530331;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)0;
unsigned char var_17 = (unsigned char)187;
int var_18 = 714019315;
unsigned long long int var_19 = 10109154798244267042ULL;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)54;
int arr_1 [20] [20] ;
unsigned long long int arr_2 [20] [20] ;
signed char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1788609622 : 642736105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 7197545589478137546ULL : 10654950823956700346ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
