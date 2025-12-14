#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1524325288U;
int var_1 = -470524419;
int var_2 = 72428856;
unsigned int var_3 = 85666556U;
int var_4 = -901515027;
unsigned int var_5 = 253083820U;
unsigned int var_6 = 2035359863U;
unsigned int var_7 = 3786345201U;
int var_8 = 699493069;
unsigned int var_9 = 751908270U;
int var_10 = -486035393;
int var_11 = 1765841513;
unsigned int var_12 = 3119418863U;
int zero = 0;
int var_13 = -1042841818;
unsigned int var_14 = 754045443U;
int var_15 = -99281036;
int var_16 = -1149429891;
unsigned int var_17 = 691010288U;
int var_18 = -1099297708;
unsigned int var_19 = 2446764294U;
int var_20 = 1881481348;
int var_21 = 773731638;
unsigned int var_22 = 966865960U;
int arr_0 [10] ;
int arr_3 [13] [13] ;
int arr_4 [13] [13] ;
int arr_5 [13] ;
unsigned int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1445378875;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -109831321;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 592590637;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1417376642;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3516093755U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
