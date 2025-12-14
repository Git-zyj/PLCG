#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 439882653;
int var_1 = 946885853;
int var_2 = -1726373655;
int var_7 = -1588725947;
int var_8 = 1838134668;
int var_9 = -1855712424;
int zero = 0;
int var_11 = 1025593638;
int var_12 = -1540318321;
int var_13 = 1574084519;
int var_14 = -1705002388;
int var_15 = 904353385;
int var_16 = -2124904297;
int arr_1 [22] [22] ;
int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1100161021;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1704854731;
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
