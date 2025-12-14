#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
signed char var_6 = (signed char)-126;
unsigned char var_8 = (unsigned char)241;
signed char var_10 = (signed char)58;
int zero = 0;
unsigned int var_19 = 2021245911U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)101;
unsigned char var_22 = (unsigned char)208;
long long int var_23 = 4981922789539660238LL;
unsigned char var_24 = (unsigned char)191;
unsigned int var_25 = 1923577487U;
long long int var_26 = 8241009362658631980LL;
_Bool arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned char arr_5 [21] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 5606910465944530691LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)43183;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
