#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14864946885673623098ULL;
unsigned long long int var_1 = 15532590279612684250ULL;
unsigned long long int var_2 = 1390603131038060092ULL;
unsigned long long int var_3 = 524028666455410528ULL;
unsigned long long int var_4 = 15409305400165652711ULL;
unsigned long long int var_5 = 7227076798985329554ULL;
unsigned long long int var_6 = 12433360758744931617ULL;
unsigned long long int var_7 = 3363689160708696835ULL;
unsigned long long int var_8 = 11123526823046616705ULL;
unsigned long long int var_9 = 3755156803805364742ULL;
unsigned long long int var_10 = 5147746793460610817ULL;
int zero = 0;
unsigned long long int var_11 = 1635990279316742331ULL;
unsigned long long int var_12 = 6924918404360225132ULL;
unsigned long long int var_13 = 6179923702272550532ULL;
unsigned long long int var_14 = 9600647496899256302ULL;
unsigned long long int var_15 = 10655745475969489616ULL;
unsigned long long int var_16 = 9320524981828157730ULL;
unsigned long long int var_17 = 15857002599233963219ULL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 8236479168157121836ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 13938892164706295063ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6504351599254700961ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 717971276663574707ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
