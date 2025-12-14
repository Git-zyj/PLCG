#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25563;
unsigned int var_3 = 1615242839U;
unsigned long long int var_4 = 1116454591228724843ULL;
unsigned int var_5 = 2846593606U;
unsigned int var_6 = 2198022145U;
signed char var_7 = (signed char)90;
unsigned short var_9 = (unsigned short)43169;
signed char var_11 = (signed char)-53;
int zero = 0;
signed char var_13 = (signed char)93;
int var_14 = -645204416;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4511909066461629255ULL;
signed char var_17 = (signed char)-23;
unsigned short var_18 = (unsigned short)65517;
_Bool arr_5 [16] [16] [16] ;
unsigned int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 2169993916U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
