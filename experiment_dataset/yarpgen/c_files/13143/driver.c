#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned char var_1 = (unsigned char)127;
unsigned int var_2 = 1527918525U;
unsigned short var_5 = (unsigned short)43584;
unsigned long long int var_6 = 18362865398554878063ULL;
unsigned short var_9 = (unsigned short)40593;
unsigned long long int var_10 = 13309227422791709086ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)108;
unsigned long long int var_14 = 9418779168293144224ULL;
unsigned short var_15 = (unsigned short)6386;
long long int var_16 = 4527675827641351168LL;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1755714508154790217ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
