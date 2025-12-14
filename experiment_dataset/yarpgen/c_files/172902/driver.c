#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23009;
unsigned short var_9 = (unsigned short)63758;
int zero = 0;
unsigned int var_12 = 4293008515U;
int var_13 = -769491734;
unsigned long long int var_14 = 13129168717889656108ULL;
long long int var_15 = -9081562416183142488LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13892008704535163970ULL;
unsigned char var_18 = (unsigned char)89;
short var_19 = (short)26483;
unsigned short arr_0 [20] [20] ;
unsigned short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)35778;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)38576;
}

void checksum() {
    hash(&seed, var_12);
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
