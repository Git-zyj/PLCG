#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5197;
unsigned short var_2 = (unsigned short)53385;
int var_7 = -606099782;
unsigned int var_11 = 3122333157U;
int zero = 0;
unsigned int var_13 = 3470530283U;
unsigned char var_14 = (unsigned char)37;
short var_15 = (short)-25766;
unsigned char var_16 = (unsigned char)51;
unsigned long long int var_17 = 7294263414767167858ULL;
short var_18 = (short)4584;
signed char arr_1 [21] ;
unsigned int arr_3 [21] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2300673372U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)12039;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
