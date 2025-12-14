#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9034695351688641916LL;
unsigned long long int var_9 = 10636487634594569652ULL;
int zero = 0;
long long int var_13 = -8648307978676224143LL;
int var_14 = 1073791342;
_Bool var_15 = (_Bool)1;
short var_16 = (short)11222;
_Bool var_17 = (_Bool)0;
int var_18 = -464849992;
unsigned int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3954174502U;
}

void checksum() {
    hash(&seed, var_13);
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
