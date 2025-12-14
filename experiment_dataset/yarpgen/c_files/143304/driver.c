#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10719;
long long int var_4 = 8727022636777201955LL;
signed char var_6 = (signed char)69;
long long int var_7 = -6386899645081414688LL;
int zero = 0;
unsigned long long int var_10 = 16130160129736546448ULL;
int var_11 = -1669221566;
unsigned long long int var_12 = 6251896363122363780ULL;
long long int var_13 = 300552291890110144LL;
long long int var_14 = -7879712302417166638LL;
int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1090597919;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1893276961U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3500260231U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
