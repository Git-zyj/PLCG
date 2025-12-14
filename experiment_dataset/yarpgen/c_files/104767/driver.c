#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14709;
long long int var_3 = -8913848091578279268LL;
long long int var_10 = 5284968853742589979LL;
long long int var_12 = 7256221961020338075LL;
signed char var_13 = (signed char)38;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 9440835837314361302ULL;
unsigned int var_17 = 2702508519U;
int zero = 0;
unsigned int var_18 = 1143875240U;
short var_19 = (short)-26129;
_Bool var_20 = (_Bool)0;
unsigned short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)14435 : (unsigned short)42150;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
