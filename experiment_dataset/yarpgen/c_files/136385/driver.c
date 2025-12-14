#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 543243883;
long long int var_1 = -4565163429302855351LL;
unsigned int var_8 = 3909264005U;
signed char var_9 = (signed char)0;
unsigned short var_11 = (unsigned short)45600;
int var_14 = 2117489194;
int zero = 0;
unsigned char var_15 = (unsigned char)23;
long long int var_16 = 7415403037940228081LL;
long long int var_17 = 1636994742854450008LL;
signed char var_18 = (signed char)-20;
int var_19 = -1487762869;
unsigned int arr_0 [22] ;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2318335692U : 3643246878U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)20192;
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
