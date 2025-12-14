#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 658860780;
unsigned long long int var_9 = 1424273394189964839ULL;
unsigned short var_11 = (unsigned short)56013;
unsigned long long int var_14 = 4369941489961239490ULL;
long long int var_16 = 2430354326847460057LL;
int zero = 0;
long long int var_17 = 8345263018260108288LL;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [16] ;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 7294609517352908421ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
