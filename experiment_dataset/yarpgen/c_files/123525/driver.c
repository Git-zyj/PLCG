#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1856643157;
unsigned char var_3 = (unsigned char)231;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-9828;
int var_10 = 742490887;
int zero = 0;
unsigned int var_12 = 3733458022U;
unsigned int var_13 = 3176208249U;
int var_14 = 1594650458;
signed char var_15 = (signed char)-43;
long long int arr_0 [11] ;
unsigned int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3872759410531895788LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 4016497888U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
