#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1634982494461449485ULL;
signed char var_5 = (signed char)-74;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
int var_15 = 875977360;
unsigned short var_16 = (unsigned short)42281;
unsigned long long int var_17 = 10173297780658881442ULL;
long long int var_18 = 643905849402490510LL;
unsigned short var_19 = (unsigned short)19134;
unsigned long long int var_20 = 6697011684114506604ULL;
unsigned int var_21 = 811799949U;
int arr_1 [12] [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 85210482;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 321936333;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
