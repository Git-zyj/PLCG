#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 6120319911746551541ULL;
unsigned long long int var_7 = 16917740773702504233ULL;
unsigned long long int var_11 = 13103919995949992537ULL;
unsigned int var_13 = 3040943321U;
unsigned short var_14 = (unsigned short)16627;
short var_16 = (short)4580;
int zero = 0;
unsigned char var_20 = (unsigned char)57;
unsigned char var_21 = (unsigned char)203;
long long int var_22 = -5991411221368269125LL;
long long int var_23 = 26482015126501608LL;
signed char var_24 = (signed char)97;
unsigned short var_25 = (unsigned short)25613;
int arr_1 [24] ;
signed char arr_3 [24] [24] ;
unsigned short arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1404133207;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)23883;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
