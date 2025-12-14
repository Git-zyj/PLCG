#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15248;
int var_4 = -574399666;
short var_6 = (short)11768;
unsigned long long int var_7 = 4434807338015144656ULL;
int zero = 0;
short var_10 = (short)366;
int var_11 = -993556639;
unsigned short var_12 = (unsigned short)45371;
unsigned int var_13 = 1239210025U;
short var_14 = (short)25406;
_Bool var_15 = (_Bool)0;
unsigned int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 2248373612U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2146874972028889062ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 17246351801872875597ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
