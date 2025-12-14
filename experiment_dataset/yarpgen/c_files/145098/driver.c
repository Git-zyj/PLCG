#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11217878842746241256ULL;
unsigned long long int var_2 = 987258729428717539ULL;
unsigned long long int var_4 = 3732048346596215860ULL;
unsigned int var_10 = 2412438485U;
int zero = 0;
unsigned short var_11 = (unsigned short)6730;
signed char var_12 = (signed char)61;
int var_13 = -1566867589;
short var_14 = (short)897;
unsigned long long int var_15 = 8695495623444723459ULL;
signed char var_16 = (signed char)58;
unsigned long long int arr_6 [17] ;
unsigned int arr_7 [17] [17] [17] [17] ;
int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 12487501613577498066ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2029010582U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = -2044806043;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
