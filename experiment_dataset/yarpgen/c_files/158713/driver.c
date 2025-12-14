#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
unsigned int var_3 = 84908323U;
unsigned short var_8 = (unsigned short)26902;
int var_10 = -707672598;
int zero = 0;
unsigned int var_14 = 20922203U;
long long int var_15 = 7436508711675180265LL;
long long int var_16 = -2675116936097546464LL;
signed char var_17 = (signed char)53;
int var_18 = -1441151058;
long long int var_19 = 2072488139360365267LL;
signed char arr_2 [21] [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2656342205U;
}

void checksum() {
    hash(&seed, var_14);
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
