#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17375705927638320280ULL;
long long int var_3 = 8981915524992053366LL;
unsigned long long int var_5 = 1151182357382316884ULL;
unsigned int var_7 = 129371560U;
unsigned long long int var_10 = 15013425321634556142ULL;
int var_12 = 512375526;
int var_13 = -1784983605;
int zero = 0;
unsigned long long int var_14 = 730414194530252105ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)25;
short var_17 = (short)2963;
unsigned long long int var_18 = 8647003441347818406ULL;
unsigned int arr_1 [18] [18] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2266964773U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 6906086597798489485LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
