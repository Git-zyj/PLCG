#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24257;
long long int var_1 = 5107270307492025955LL;
unsigned char var_6 = (unsigned char)144;
long long int var_11 = -7755839688265766564LL;
unsigned short var_12 = (unsigned short)25157;
int zero = 0;
signed char var_13 = (signed char)-91;
unsigned int var_14 = 3103497571U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)111;
unsigned long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 457884159767613254ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
