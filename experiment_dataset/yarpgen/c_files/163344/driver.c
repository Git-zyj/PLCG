#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10387597943248131392ULL;
unsigned long long int var_2 = 16585215313508718583ULL;
unsigned int var_6 = 3733349374U;
int var_9 = -2022835719;
short var_15 = (short)-26091;
int zero = 0;
int var_16 = -2140610825;
unsigned long long int var_17 = 11400898086956988928ULL;
int var_18 = -897569696;
short var_19 = (short)-8484;
signed char arr_0 [24] ;
int arr_1 [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -601852269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)19;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
