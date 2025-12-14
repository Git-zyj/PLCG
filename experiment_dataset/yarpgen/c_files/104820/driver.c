#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18212;
long long int var_4 = 4684138748076988738LL;
unsigned int var_5 = 1792010580U;
signed char var_8 = (signed char)-87;
unsigned int var_9 = 772608248U;
long long int var_11 = 7336318180234615408LL;
int zero = 0;
int var_13 = -261095795;
long long int var_14 = 7242266995593213750LL;
short var_15 = (short)-2950;
signed char var_16 = (signed char)-15;
short arr_0 [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-26447;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -920799371934840412LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
