#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21445;
int var_2 = 309436000;
short var_3 = (short)4420;
short var_4 = (short)4226;
unsigned int var_6 = 3687400246U;
unsigned char var_8 = (unsigned char)27;
unsigned int var_9 = 552115228U;
unsigned short var_12 = (unsigned short)51529;
signed char var_14 = (signed char)37;
short var_15 = (short)30700;
int zero = 0;
unsigned long long int var_19 = 12388766922766749518ULL;
unsigned long long int var_20 = 18053901041613976938ULL;
unsigned char var_21 = (unsigned char)248;
short var_22 = (short)-19209;
unsigned long long int var_23 = 7236843126035881750ULL;
_Bool var_24 = (_Bool)1;
int var_25 = 1437208336;
unsigned int arr_0 [14] [14] ;
int arr_4 [24] [24] ;
short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2609382682U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -2070751928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-29849;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
