#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3493033312256177759LL;
long long int var_1 = -3293001756349576144LL;
int var_4 = -220544586;
long long int var_5 = -5604404506444883862LL;
int var_11 = 1001514712;
int var_12 = 918447667;
long long int var_13 = 2049055080648544350LL;
int zero = 0;
long long int var_14 = -2084191313682702523LL;
long long int var_15 = -5023541087548447914LL;
long long int var_16 = 2580418373587273524LL;
int var_17 = -1929311315;
long long int arr_1 [12] [12] ;
int arr_3 [12] ;
long long int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -6281718201466803874LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1047612947;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 7774951343683100319LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
