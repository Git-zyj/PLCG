#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4971;
int var_1 = -2029561194;
unsigned long long int var_3 = 14026063045008550972ULL;
short var_4 = (short)-28369;
signed char var_5 = (signed char)-11;
short var_6 = (short)24410;
unsigned short var_8 = (unsigned short)3434;
unsigned short var_9 = (unsigned short)25240;
int zero = 0;
long long int var_10 = 7726658738511416621LL;
unsigned int var_11 = 4101978553U;
short var_12 = (short)-691;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)67;
unsigned int var_15 = 1834297953U;
unsigned short var_16 = (unsigned short)9701;
signed char arr_0 [11] ;
_Bool arr_2 [11] [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3487136851986385758ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
