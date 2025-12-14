#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 105703075U;
unsigned short var_1 = (unsigned short)25641;
int var_2 = 17497082;
unsigned int var_3 = 1609594588U;
unsigned int var_4 = 2934974398U;
int var_7 = 631794548;
int var_8 = -112685283;
int var_10 = 986968167;
int var_11 = -1591596226;
unsigned short var_12 = (unsigned short)3297;
int zero = 0;
unsigned int var_13 = 3938887964U;
int var_14 = 1127398700;
int var_15 = -1226149280;
unsigned short var_16 = (unsigned short)4310;
unsigned int var_17 = 3575044646U;
unsigned short var_18 = (unsigned short)13099;
int var_19 = 1200879448;
int arr_1 [11] ;
int arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 675079795;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -1225203053;
}

void checksum() {
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
