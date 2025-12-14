#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4500310686841055160LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 11915433909881687663ULL;
unsigned long long int var_6 = 1784515594759858260ULL;
unsigned long long int var_8 = 15722259093379146435ULL;
int zero = 0;
int var_11 = 713074892;
unsigned short var_12 = (unsigned short)5788;
long long int var_13 = -2618292632533787667LL;
unsigned long long int var_14 = 6123940717441443168ULL;
unsigned long long int arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 14946026452829942754ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-1105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11956026048271910950ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
