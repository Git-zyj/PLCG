#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3167019058191588300LL;
unsigned short var_1 = (unsigned short)29414;
signed char var_2 = (signed char)-85;
unsigned short var_3 = (unsigned short)14126;
unsigned long long int var_5 = 12559528676315278918ULL;
short var_6 = (short)-13265;
signed char var_7 = (signed char)87;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)39671;
short var_14 = (short)16262;
unsigned long long int var_15 = 11128668882505042079ULL;
unsigned long long int var_16 = 2513292285795485714ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11827877558953319464ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 9557193949574511084ULL;
long long int arr_1 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
unsigned long long int arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1944292507321044773LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1348314359621518354ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 10264856879570810370ULL;
}

void checksum() {
    hash(&seed, var_13);
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
