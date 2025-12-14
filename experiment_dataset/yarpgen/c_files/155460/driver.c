#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49338;
short var_8 = (short)26255;
unsigned short var_10 = (unsigned short)22251;
int zero = 0;
unsigned int var_14 = 832020960U;
unsigned int var_15 = 3187710175U;
short var_16 = (short)19732;
unsigned short var_17 = (unsigned short)49714;
unsigned int var_18 = 3863579507U;
unsigned long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 14012107734954666473ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
