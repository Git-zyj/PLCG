#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15325492799281161443ULL;
int zero = 0;
short var_15 = (short)23986;
long long int var_16 = 2377786279858494823LL;
unsigned short var_17 = (unsigned short)1795;
signed char var_18 = (signed char)-82;
unsigned char var_19 = (unsigned char)171;
unsigned long long int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2063196746586156461ULL : 9539724835849633427ULL;
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
