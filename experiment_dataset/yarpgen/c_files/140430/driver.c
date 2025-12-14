#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6342743308518697431LL;
unsigned long long int var_3 = 15282563795995400538ULL;
int var_4 = -1068658487;
unsigned long long int var_7 = 12578962616200679510ULL;
unsigned long long int var_8 = 7825493132219944062ULL;
int var_9 = -267246983;
int zero = 0;
unsigned long long int var_10 = 11512993465087480834ULL;
signed char var_11 = (signed char)18;
unsigned int var_12 = 331635561U;
signed char var_13 = (signed char)-108;
signed char arr_0 [15] ;
unsigned char arr_1 [15] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -2532386261148116446LL : -407454313708734762LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
