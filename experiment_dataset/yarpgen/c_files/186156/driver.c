#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56417;
int var_2 = -612010624;
int var_3 = 59762124;
int var_4 = -2067835194;
unsigned char var_5 = (unsigned char)28;
short var_7 = (short)16499;
unsigned short var_9 = (unsigned short)40654;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2617979083U;
int var_12 = 765341171;
int zero = 0;
signed char var_13 = (signed char)47;
unsigned short var_14 = (unsigned short)13890;
long long int var_15 = 8715806613640896834LL;
unsigned int var_16 = 1961905665U;
signed char var_17 = (signed char)-71;
unsigned int arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3815338621U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
