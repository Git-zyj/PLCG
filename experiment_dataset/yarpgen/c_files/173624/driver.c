#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1377690524;
int var_1 = 56630093;
unsigned short var_2 = (unsigned short)6527;
unsigned long long int var_4 = 3625748092005266354ULL;
int var_5 = -218005853;
signed char var_7 = (signed char)3;
int var_8 = -932289404;
unsigned int var_9 = 1665786735U;
short var_11 = (short)-27356;
signed char var_12 = (signed char)15;
short var_14 = (short)-1983;
int var_15 = 1826591831;
int zero = 0;
short var_16 = (short)28189;
unsigned short var_17 = (unsigned short)27;
unsigned long long int var_18 = 12209445711008123197ULL;
unsigned long long int var_19 = 314284636119071009ULL;
short arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)5888;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
