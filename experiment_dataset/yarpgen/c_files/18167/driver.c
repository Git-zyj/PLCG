#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1504433264;
_Bool var_6 = (_Bool)0;
int var_8 = -1421446301;
unsigned int var_12 = 766105490U;
short var_13 = (short)-915;
int var_14 = -951975513;
short var_15 = (short)13622;
int zero = 0;
unsigned short var_17 = (unsigned short)37903;
unsigned char var_18 = (unsigned char)50;
short var_19 = (short)18893;
unsigned int var_20 = 605428590U;
unsigned short var_21 = (unsigned short)11285;
unsigned char var_22 = (unsigned char)63;
unsigned int arr_3 [17] [17] ;
int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 4071972121U : 3703070098U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -476758220;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
