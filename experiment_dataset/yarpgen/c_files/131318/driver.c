#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)21;
signed char var_8 = (signed char)74;
signed char var_13 = (signed char)-28;
unsigned char var_14 = (unsigned char)118;
int zero = 0;
unsigned long long int var_18 = 15866573992376770193ULL;
short var_19 = (short)32178;
short var_20 = (short)-7713;
_Bool var_21 = (_Bool)0;
unsigned int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 339436018U;
}

void checksum() {
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
