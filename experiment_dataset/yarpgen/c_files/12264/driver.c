#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3151690526U;
signed char var_4 = (signed char)51;
unsigned long long int var_5 = 14884806965481079985ULL;
unsigned short var_6 = (unsigned short)22097;
signed char var_8 = (signed char)29;
unsigned short var_9 = (unsigned short)36436;
unsigned char var_10 = (unsigned char)207;
signed char var_11 = (signed char)-104;
short var_12 = (short)21761;
unsigned short var_13 = (unsigned short)12672;
int zero = 0;
unsigned long long int var_15 = 4551625439108056653ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)53;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 429995932U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
