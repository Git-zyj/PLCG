#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8848880105666809647LL;
long long int var_5 = 10790536308390660LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)46979;
long long int var_9 = -519369789910377196LL;
int zero = 0;
unsigned char var_11 = (unsigned char)79;
short var_12 = (short)7262;
long long int var_13 = 7631388841114739414LL;
int var_14 = 262116752;
unsigned short var_15 = (unsigned short)11669;
long long int arr_2 [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -7613868435373293403LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4076962485204602201LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
