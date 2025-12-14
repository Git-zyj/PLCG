#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16403893265440035224ULL;
short var_3 = (short)29463;
unsigned char var_4 = (unsigned char)50;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)113;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
unsigned int var_10 = 3305319087U;
int var_11 = 1531161198;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4435316964191130094ULL;
unsigned int arr_2 [12] [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3960855392U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 15723756171342655299ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
