#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5160058252138403243LL;
long long int var_4 = 4672735987351992251LL;
unsigned short var_5 = (unsigned short)25438;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 1448248622254950844ULL;
int zero = 0;
short var_11 = (short)32476;
unsigned short var_12 = (unsigned short)39833;
int var_13 = 1775800564;
unsigned int var_14 = 3765067103U;
short var_15 = (short)-12427;
unsigned long long int var_16 = 15369732720158318342ULL;
unsigned long long int var_17 = 18429008553361542283ULL;
_Bool var_18 = (_Bool)0;
int arr_1 [21] ;
long long int arr_2 [21] ;
signed char arr_3 [21] ;
unsigned long long int arr_4 [21] ;
signed char arr_5 [21] ;
unsigned long long int arr_11 [21] [21] [21] ;
signed char arr_6 [21] [21] ;
long long int arr_7 [21] ;
unsigned long long int arr_12 [21] [21] ;
int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -145809542;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -7915891582157129471LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 12816155251129128084ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 12017995801442500054ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 4609787320826507954LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 13077019783182950502ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -158984854;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
