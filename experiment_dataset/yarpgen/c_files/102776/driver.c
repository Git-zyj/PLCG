#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2661717156U;
unsigned short var_6 = (unsigned short)38239;
long long int var_7 = -293124682394477844LL;
unsigned long long int var_8 = 14316012471650873719ULL;
int zero = 0;
long long int var_12 = -8525495480813682606LL;
unsigned short var_13 = (unsigned short)57338;
unsigned long long int var_14 = 15224080664836747782ULL;
unsigned long long int var_15 = 13912232181287114933ULL;
unsigned long long int var_16 = 13252762926994301534ULL;
short var_17 = (short)-14558;
signed char arr_3 [10] [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 966033194;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
