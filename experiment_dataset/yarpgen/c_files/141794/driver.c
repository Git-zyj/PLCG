#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1915936820669060035ULL;
unsigned short var_4 = (unsigned short)11510;
unsigned short var_6 = (unsigned short)50033;
short var_7 = (short)2843;
short var_8 = (short)1140;
unsigned int var_12 = 2347885133U;
int zero = 0;
unsigned long long int var_13 = 13677224094127221678ULL;
short var_14 = (short)-6415;
short var_15 = (short)27833;
unsigned long long int var_16 = 16250333106212837180ULL;
unsigned int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2875001661U;
}

void checksum() {
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
