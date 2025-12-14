#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1111326671U;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2754422680U;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3504122706U;
int zero = 0;
unsigned int var_13 = 233363997U;
unsigned int var_14 = 3647041789U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7515291010053278903LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1365150143U;
}

void checksum() {
    hash(&seed, var_13);
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
