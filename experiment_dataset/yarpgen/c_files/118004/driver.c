#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24587;
unsigned short var_1 = (unsigned short)44089;
long long int var_5 = -6777903809319527660LL;
long long int var_7 = -914513115973418950LL;
unsigned int var_13 = 3225244297U;
unsigned long long int var_14 = 7128223519455623632ULL;
unsigned short var_16 = (unsigned short)17719;
int var_17 = -1823293;
int zero = 0;
unsigned int var_20 = 3096750788U;
unsigned int var_21 = 1706446843U;
unsigned long long int var_22 = 16398748879364029186ULL;
int var_23 = 2045689702;
int var_24 = -1245956378;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 17772543644939437954ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
