#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 237517056;
unsigned int var_11 = 1854777051U;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)37809;
int zero = 0;
unsigned long long int var_15 = 13015869400448101659ULL;
signed char var_16 = (signed char)-115;
unsigned short var_17 = (unsigned short)15089;
_Bool var_18 = (_Bool)0;
int var_19 = 1541233033;
long long int arr_0 [14] ;
unsigned char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -7965072129926235822LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)38;
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
