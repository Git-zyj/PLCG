#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2357953633662177355ULL;
unsigned long long int var_1 = 4273772118623523320ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 3255199472697826303ULL;
unsigned long long int var_4 = 1986483633620871723ULL;
unsigned int var_5 = 1140864971U;
unsigned long long int var_6 = 7167532352899965387ULL;
short var_7 = (short)-23800;
unsigned long long int var_8 = 9213493466175757699ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11256095581358897223ULL;
unsigned int var_12 = 2619552473U;
int zero = 0;
unsigned long long int var_13 = 12719401874580977240ULL;
unsigned short var_14 = (unsigned short)42301;
signed char var_15 = (signed char)-85;
unsigned long long int var_16 = 14922138987966709210ULL;
unsigned long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4223742446019147760ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
