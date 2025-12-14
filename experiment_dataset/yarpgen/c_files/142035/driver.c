#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2345700594U;
unsigned int var_2 = 1560247167U;
unsigned int var_4 = 762630908U;
unsigned long long int var_9 = 3598207329639857031ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-30603;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3861509097880240755LL;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1441173257;
}

void checksum() {
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
