#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2233106865U;
short var_1 = (short)-21708;
signed char var_2 = (signed char)-117;
long long int var_3 = -8396042359950680660LL;
long long int var_4 = 6600654353244676731LL;
short var_5 = (short)24688;
unsigned char var_6 = (unsigned char)36;
unsigned char var_9 = (unsigned char)64;
int zero = 0;
short var_10 = (short)3137;
unsigned int var_11 = 4137971040U;
unsigned short var_12 = (unsigned short)10523;
_Bool var_13 = (_Bool)1;
short var_14 = (short)7294;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)76;
_Bool arr_2 [13] [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
