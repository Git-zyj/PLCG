#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5954590655899872295ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_11 = 9817410063782147595ULL;
short var_13 = (short)21334;
unsigned int var_16 = 1502187666U;
int zero = 0;
short var_19 = (short)30983;
unsigned int var_20 = 357435777U;
unsigned short var_21 = (unsigned short)27594;
unsigned int var_22 = 4235033102U;
unsigned long long int arr_0 [20] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 12359680180951326324ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)18014;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
