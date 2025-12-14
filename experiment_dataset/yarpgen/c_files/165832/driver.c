#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32023;
long long int var_3 = 8655943852322095156LL;
unsigned char var_5 = (unsigned char)255;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1934687845U;
int zero = 0;
unsigned long long int var_13 = 12945821650217265518ULL;
short var_14 = (short)254;
unsigned long long int var_15 = 8486220551161710256ULL;
unsigned long long int var_16 = 12979275417286613772ULL;
int var_17 = 62078007;
short arr_1 [19] ;
short arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-29542;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)18830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 12952582522232288801ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
