#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3444107212U;
long long int var_7 = 8851886476647211092LL;
short var_8 = (short)-18145;
unsigned int var_9 = 3935600977U;
unsigned int var_10 = 3670355948U;
unsigned long long int var_14 = 14941655751953461826ULL;
int zero = 0;
unsigned long long int var_17 = 3045022871386965612ULL;
unsigned int var_18 = 2677825970U;
unsigned long long int var_19 = 2850595651983340740ULL;
long long int var_20 = -4473913865038522056LL;
short var_21 = (short)26759;
long long int arr_2 [23] [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -2726448193998982534LL : -4649305820975792283LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -2702439335049824404LL : 3415170047629710206LL;
}

void checksum() {
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
