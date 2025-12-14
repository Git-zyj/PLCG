#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-9774;
unsigned int var_6 = 4197185566U;
long long int var_7 = -1321635093088175217LL;
short var_8 = (short)14290;
int zero = 0;
short var_10 = (short)-18746;
unsigned short var_11 = (unsigned short)42149;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28444;
long long int var_14 = -5819811701734188411LL;
unsigned char arr_3 [25] ;
short arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)30297;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
