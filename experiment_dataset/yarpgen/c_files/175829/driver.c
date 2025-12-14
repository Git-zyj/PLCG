#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned short var_2 = (unsigned short)23737;
short var_3 = (short)-8790;
short var_5 = (short)-13711;
unsigned short var_9 = (unsigned short)39171;
int var_10 = 887784885;
int zero = 0;
long long int var_14 = 9157141290585974348LL;
short var_15 = (short)10028;
unsigned long long int var_16 = 7553835794398273348ULL;
int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1853732827;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)15970;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 2035205253U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
