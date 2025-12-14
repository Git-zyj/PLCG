#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)32226;
unsigned int var_3 = 3169702847U;
long long int var_4 = 5768885493739634006LL;
unsigned int var_6 = 73418896U;
unsigned int var_8 = 1352796873U;
signed char var_9 = (signed char)-112;
unsigned int var_12 = 1473938826U;
int var_13 = 931600642;
int zero = 0;
short var_15 = (short)4782;
short var_16 = (short)-31215;
unsigned int var_17 = 1888287754U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1799288523U;
unsigned long long int var_20 = 4107541811463463090ULL;
long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned int arr_4 [19] ;
unsigned long long int arr_5 [19] [19] ;
signed char arr_3 [10] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4034294219180105592LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 10261995399269286283ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2622983401U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 923514851114457613ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)31622;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
