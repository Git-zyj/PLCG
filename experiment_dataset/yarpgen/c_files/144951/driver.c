#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -6556924157829354442LL;
unsigned char var_6 = (unsigned char)169;
unsigned char var_8 = (unsigned char)22;
unsigned short var_12 = (unsigned short)29095;
unsigned short var_13 = (unsigned short)39898;
int zero = 0;
signed char var_15 = (signed char)117;
long long int var_16 = 8532214855056692652LL;
long long int var_17 = 7994530388045140880LL;
unsigned short var_18 = (unsigned short)19619;
long long int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7404755907634728345LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16401517186405912126ULL : 1794471092654664240ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
