#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
long long int var_2 = -5781101197197266733LL;
unsigned int var_3 = 3739647048U;
unsigned char var_5 = (unsigned char)100;
unsigned int var_6 = 4177008451U;
short var_7 = (short)7693;
short var_8 = (short)19711;
_Bool var_10 = (_Bool)1;
int var_11 = 757532264;
int zero = 0;
short var_13 = (short)-11360;
long long int var_14 = 6866949711825462171LL;
signed char var_15 = (signed char)-112;
unsigned long long int var_16 = 10648207477915412140ULL;
short var_17 = (short)-13037;
long long int var_18 = -7901002634532177491LL;
unsigned long long int var_19 = 637016855932245772ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)14480;
unsigned long long int arr_10 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 485162055675352940ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
