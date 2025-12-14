#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13833;
long long int var_5 = -2866939875090404437LL;
int var_13 = -27960442;
_Bool var_14 = (_Bool)0;
int var_17 = 174307527;
int zero = 0;
signed char var_19 = (signed char)38;
long long int var_20 = -6887860514658973552LL;
int var_21 = -1765186367;
unsigned short var_22 = (unsigned short)58834;
_Bool var_23 = (_Bool)1;
int arr_0 [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1869464136;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 14220154048368905649ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
