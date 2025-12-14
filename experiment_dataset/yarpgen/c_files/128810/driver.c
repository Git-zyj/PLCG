#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2084786655561619986LL;
unsigned char var_3 = (unsigned char)184;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-16207;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
unsigned short var_12 = (unsigned short)48812;
long long int var_13 = -5074294693562421079LL;
long long int var_14 = -8675058927448954507LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-10;
unsigned long long int var_17 = 15615956848417204607ULL;
short var_18 = (short)7569;
unsigned long long int arr_0 [20] ;
short arr_1 [20] ;
int arr_9 [20] [20] [20] [20] ;
unsigned short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 6066926312561762353ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-29657;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1725622911;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)15465;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
