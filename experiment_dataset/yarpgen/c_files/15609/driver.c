#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16462;
long long int var_6 = -4658655384462830920LL;
unsigned short var_8 = (unsigned short)38347;
unsigned long long int var_10 = 2513100367436519138ULL;
int zero = 0;
long long int var_13 = -743578373308805301LL;
long long int var_14 = 925463389019159460LL;
int var_15 = 636993374;
unsigned short var_16 = (unsigned short)46085;
unsigned long long int var_17 = 15787614604636821199ULL;
unsigned long long int arr_0 [23] ;
int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16718713221557468616ULL : 3370620199318728989ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 945461065 : -677254825;
}

void checksum() {
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
