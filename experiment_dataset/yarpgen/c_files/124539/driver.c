#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 588652117;
unsigned char var_4 = (unsigned char)111;
unsigned char var_5 = (unsigned char)23;
_Bool var_6 = (_Bool)0;
int var_7 = 2022197652;
unsigned int var_8 = 1455080742U;
int zero = 0;
short var_10 = (short)2380;
int var_11 = 409119328;
int var_12 = -683049788;
unsigned char var_13 = (unsigned char)119;
long long int var_14 = 992785348850751198LL;
_Bool var_15 = (_Bool)0;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 13835726425522291094ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
