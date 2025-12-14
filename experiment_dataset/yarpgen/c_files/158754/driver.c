#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2086806520;
long long int var_4 = -381672589937430118LL;
_Bool var_7 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -1478151493;
int zero = 0;
short var_17 = (short)30762;
unsigned long long int var_18 = 1169705435408195883ULL;
unsigned int var_19 = 4004434805U;
long long int var_20 = -6426378026766190788LL;
long long int var_21 = 7881815703365787292LL;
long long int var_22 = -8689829134393230936LL;
long long int var_23 = -6576510914316068646LL;
int arr_2 [23] ;
long long int arr_7 [23] [23] [23] ;
unsigned short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -682726431;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4848399322080501679LL : 103827751885414241LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57792 : (unsigned short)13187;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
