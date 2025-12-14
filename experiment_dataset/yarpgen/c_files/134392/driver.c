#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -961177884;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)37;
short var_14 = (short)14395;
short var_15 = (short)-1567;
unsigned int var_16 = 135816686U;
int zero = 0;
unsigned char var_18 = (unsigned char)44;
signed char var_19 = (signed char)-10;
unsigned long long int var_20 = 13921374741126728556ULL;
unsigned long long int var_21 = 16228417892527601232ULL;
unsigned char var_22 = (unsigned char)214;
unsigned int arr_1 [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1797325005U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)29974;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
