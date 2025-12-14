#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2510897645867511731LL;
unsigned long long int var_6 = 2490138438828185408ULL;
long long int var_8 = -9173488516613938110LL;
unsigned int var_9 = 36612940U;
signed char var_11 = (signed char)61;
short var_12 = (short)-15923;
long long int var_14 = -573360472243469022LL;
int zero = 0;
unsigned short var_18 = (unsigned short)27087;
long long int var_19 = -6536903923769917529LL;
unsigned short var_20 = (unsigned short)33199;
long long int var_21 = 5007730580092377778LL;
unsigned long long int var_22 = 3170237107912262464ULL;
short arr_1 [18] ;
unsigned short arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)29592;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)4100;
}

void checksum() {
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
