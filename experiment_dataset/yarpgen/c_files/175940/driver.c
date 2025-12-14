#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)137;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-29010;
int var_8 = -1055111295;
unsigned char var_9 = (unsigned char)74;
int zero = 0;
signed char var_10 = (signed char)-80;
unsigned long long int var_11 = 14821922550137434500ULL;
signed char var_12 = (signed char)-46;
short var_13 = (short)29621;
unsigned long long int var_14 = 12194014870335913062ULL;
unsigned char var_15 = (unsigned char)181;
int arr_1 [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1400386600;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)30584;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
