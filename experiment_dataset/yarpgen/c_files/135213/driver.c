#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-97;
unsigned short var_8 = (unsigned short)54305;
unsigned int var_10 = 251493060U;
signed char var_11 = (signed char)1;
unsigned int var_15 = 3493140193U;
int zero = 0;
unsigned int var_19 = 780374904U;
unsigned short var_20 = (unsigned short)24370;
unsigned int var_21 = 2203325221U;
unsigned short var_22 = (unsigned short)6124;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 13089053366057147873ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
