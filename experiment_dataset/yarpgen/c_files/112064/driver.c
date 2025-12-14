#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2872810587U;
int var_3 = 1055114245;
long long int var_9 = 8183076850078447564LL;
int zero = 0;
unsigned int var_11 = 3769565576U;
long long int var_12 = 4175103334722053947LL;
unsigned short var_13 = (unsigned short)42287;
long long int var_14 = 420348759830050015LL;
unsigned short var_15 = (unsigned short)18211;
unsigned int var_16 = 2794529913U;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1929380198U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2770103393U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
