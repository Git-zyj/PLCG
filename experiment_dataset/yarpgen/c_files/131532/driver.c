#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37320;
short var_3 = (short)-24362;
int var_4 = -1962822232;
unsigned short var_5 = (unsigned short)12671;
unsigned short var_7 = (unsigned short)11390;
unsigned char var_12 = (unsigned char)63;
int zero = 0;
unsigned int var_15 = 4046153580U;
signed char var_16 = (signed char)82;
short var_17 = (short)29483;
long long int var_18 = -7802356134136366577LL;
signed char var_19 = (signed char)-11;
unsigned long long int var_20 = 542565228559056282ULL;
unsigned long long int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1462894310159376048ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
