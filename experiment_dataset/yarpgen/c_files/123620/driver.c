#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 3853627588U;
long long int var_16 = -3535778483143322642LL;
int zero = 0;
unsigned long long int var_17 = 10820047639459150652ULL;
unsigned long long int var_18 = 6045706269426933609ULL;
unsigned long long int var_19 = 12691680481127575977ULL;
unsigned int var_20 = 4188224767U;
unsigned int var_21 = 983594909U;
unsigned long long int arr_0 [13] [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 6939708267019927130ULL : 10632494544799161658ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
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
