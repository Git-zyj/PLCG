#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2249818217U;
unsigned char var_4 = (unsigned char)144;
unsigned char var_5 = (unsigned char)214;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)153;
unsigned int var_8 = 2806067257U;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
unsigned char var_11 = (unsigned char)167;
unsigned char var_12 = (unsigned char)121;
unsigned char var_13 = (unsigned char)78;
unsigned char var_14 = (unsigned char)122;
unsigned char var_15 = (unsigned char)137;
long long int var_16 = 2138266701709680372LL;
_Bool arr_2 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
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
