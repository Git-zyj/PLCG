#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5675;
unsigned long long int var_6 = 16586748896167557302ULL;
signed char var_12 = (signed char)118;
unsigned int var_13 = 3189616329U;
int zero = 0;
unsigned short var_16 = (unsigned short)31601;
signed char var_17 = (signed char)-106;
unsigned long long int var_18 = 4239123508273532037ULL;
unsigned int var_19 = 3137067226U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 986229921U;
unsigned long long int arr_0 [16] ;
signed char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 268303151217414690ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-12;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
