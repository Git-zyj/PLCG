#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2125705477;
int var_3 = 1055453385;
int var_5 = -1964613033;
unsigned int var_7 = 1183644424U;
int var_9 = -1640440181;
unsigned int var_16 = 1945113532U;
int zero = 0;
unsigned int var_20 = 1531266594U;
unsigned int var_21 = 1058445123U;
int var_22 = -1931126376;
unsigned int var_23 = 4002594104U;
unsigned int arr_2 [24] ;
unsigned int arr_7 [24] ;
int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3152599567U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1299002775U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -1928278523;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
