#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18393;
short var_1 = (short)-18060;
unsigned int var_3 = 2145828456U;
unsigned int var_5 = 1282591835U;
int var_8 = -928230784;
short var_9 = (short)4939;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2458013136727307381ULL;
unsigned short var_13 = (unsigned short)55742;
unsigned short var_14 = (unsigned short)8308;
short var_15 = (short)-28153;
_Bool arr_3 [15] [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 684556114529580848LL : -6075409455792954798LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
