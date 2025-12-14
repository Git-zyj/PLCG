#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 825560275U;
unsigned char var_2 = (unsigned char)54;
int var_3 = -219157317;
int var_5 = -729948870;
unsigned int var_6 = 877748061U;
short var_7 = (short)-14634;
int var_8 = 23699495;
int zero = 0;
unsigned long long int var_15 = 9450074579747333784ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-112;
unsigned short var_18 = (unsigned short)25341;
unsigned long long int var_19 = 5640627656646487780ULL;
unsigned short var_20 = (unsigned short)29948;
_Bool arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
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
