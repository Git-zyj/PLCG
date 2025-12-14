#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1053208692;
long long int var_4 = 6574371767163248681LL;
signed char var_7 = (signed char)-65;
signed char var_9 = (signed char)-30;
long long int var_10 = 3892752487990847360LL;
int var_13 = 1597943886;
int zero = 0;
long long int var_15 = -5998862579521958156LL;
short var_16 = (short)20915;
long long int var_17 = -8199162636064520247LL;
unsigned long long int var_18 = 13574491168897346277ULL;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
