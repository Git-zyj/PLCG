#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2603751496U;
unsigned int var_8 = 1710864775U;
long long int var_9 = -3080035961660458420LL;
int zero = 0;
long long int var_20 = 625695552276957120LL;
long long int var_21 = 2504583185910019638LL;
unsigned long long int var_22 = 13663719562504423895ULL;
unsigned long long int var_23 = 414537471128952423ULL;
unsigned int var_24 = 1488860627U;
long long int arr_3 [21] ;
long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 6145564540227786290LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 6660552928381882814LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
