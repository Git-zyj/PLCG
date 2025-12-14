#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 29466483682366263ULL;
unsigned int var_1 = 3826374057U;
unsigned long long int var_2 = 2050292952084214363ULL;
short var_4 = (short)-21992;
long long int var_6 = -8000539988069287080LL;
unsigned short var_7 = (unsigned short)8123;
unsigned long long int var_8 = 2833598983372644592ULL;
unsigned char var_9 = (unsigned char)46;
unsigned int var_10 = 656926334U;
int zero = 0;
signed char var_11 = (signed char)-19;
unsigned char var_12 = (unsigned char)130;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)1599;
unsigned long long int var_15 = 11633258519414798353ULL;
long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned long long int arr_2 [25] ;
short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1160041527106530263LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-26227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4150934476755840133ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15474;
}

void checksum() {
    hash(&seed, var_11);
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
