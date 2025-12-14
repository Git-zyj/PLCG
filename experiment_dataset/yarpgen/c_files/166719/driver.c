#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5073357715773991289ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 1122238491U;
int zero = 0;
signed char var_16 = (signed char)-80;
unsigned short var_17 = (unsigned short)22789;
signed char var_18 = (signed char)23;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)124;
unsigned long long int var_21 = 1246141213301676794ULL;
short var_22 = (short)4201;
unsigned long long int arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 10106484813872195840ULL;
}

void checksum() {
    hash(&seed, var_16);
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
