#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17078917560262367238ULL;
unsigned int var_3 = 3425557135U;
short var_6 = (short)18211;
int zero = 0;
int var_14 = 751259293;
int var_15 = 240423559;
unsigned long long int var_16 = 18182805993083624334ULL;
int var_17 = 1021152725;
unsigned short var_18 = (unsigned short)31991;
int var_19 = 15833389;
unsigned short var_20 = (unsigned short)42753;
int arr_0 [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -815182321;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)96;
}

void checksum() {
    hash(&seed, var_14);
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
