#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3348535396U;
short var_2 = (short)-13147;
unsigned long long int var_5 = 13213116359460630361ULL;
unsigned long long int var_7 = 16697087663418624715ULL;
signed char var_10 = (signed char)-93;
unsigned short var_11 = (unsigned short)32033;
int zero = 0;
short var_17 = (short)28485;
unsigned long long int var_18 = 2572647261617018914ULL;
long long int var_19 = -8475156924248443895LL;
unsigned long long int var_20 = 6740124846892322411ULL;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 16981286506601374541ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)41237;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 15222117041907733649ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
