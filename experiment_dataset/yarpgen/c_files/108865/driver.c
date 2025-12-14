#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)16;
unsigned long long int var_5 = 12989277561889664589ULL;
long long int var_8 = -5263411645069458601LL;
unsigned int var_11 = 2614362838U;
int zero = 0;
unsigned long long int var_15 = 16017726463098924599ULL;
signed char var_16 = (signed char)47;
unsigned long long int var_17 = 16028220894185415260ULL;
short var_18 = (short)-15683;
unsigned int var_19 = 2923313616U;
unsigned long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2555369412853617258ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)59;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
