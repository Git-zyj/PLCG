#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2184381062U;
unsigned int var_4 = 1885589807U;
unsigned int var_5 = 2878016220U;
signed char var_6 = (signed char)51;
signed char var_10 = (signed char)98;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_14 = 6619515251943446895LL;
signed char var_15 = (signed char)84;
unsigned short var_16 = (unsigned short)18312;
unsigned int var_17 = 3965524064U;
unsigned short var_18 = (unsigned short)17693;
unsigned int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3782153326U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
