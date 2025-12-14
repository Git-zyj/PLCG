#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -753723045;
unsigned int var_2 = 1730001606U;
unsigned long long int var_3 = 3343994954782418189ULL;
unsigned short var_4 = (unsigned short)61817;
signed char var_6 = (signed char)30;
unsigned int var_11 = 2726259012U;
unsigned int var_12 = 541331428U;
unsigned int var_13 = 1263923003U;
int zero = 0;
long long int var_14 = 4594630407297090151LL;
unsigned int var_15 = 774039019U;
unsigned int var_16 = 682230590U;
signed char var_17 = (signed char)-106;
unsigned int arr_1 [21] ;
unsigned long long int arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1523495675U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 8584292080027075052ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 951066300U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
