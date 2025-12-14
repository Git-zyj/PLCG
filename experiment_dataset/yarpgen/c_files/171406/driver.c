#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1572228907;
long long int var_2 = -2927590654860578431LL;
short var_4 = (short)23910;
int var_7 = 1826965098;
unsigned short var_8 = (unsigned short)40203;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6083012349584926751LL;
unsigned long long int var_16 = 4751271426689561797ULL;
long long int var_17 = -2478332627702005530LL;
short var_18 = (short)-24631;
long long int var_19 = 503981602132811508LL;
int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1265462399;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
