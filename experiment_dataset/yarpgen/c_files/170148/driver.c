#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
long long int var_2 = -1771225419885895244LL;
int var_3 = 211854690;
long long int var_4 = -2597256865556609680LL;
unsigned short var_5 = (unsigned short)34599;
long long int var_6 = -3801763012138098821LL;
unsigned short var_7 = (unsigned short)5913;
unsigned long long int var_8 = 12365320283044168492ULL;
int zero = 0;
unsigned long long int var_13 = 6338784712358870025ULL;
long long int var_14 = 3999918863908437419LL;
unsigned char var_15 = (unsigned char)28;
short var_16 = (short)-32033;
unsigned int var_17 = 2538118429U;
unsigned short var_18 = (unsigned short)28208;
unsigned char arr_5 [23] [23] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 5344353184460630732LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
