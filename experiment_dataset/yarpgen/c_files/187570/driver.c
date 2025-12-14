#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32312;
short var_1 = (short)4248;
int var_5 = -443278696;
unsigned char var_7 = (unsigned char)202;
unsigned int var_12 = 3466281030U;
int zero = 0;
short var_14 = (short)6012;
short var_15 = (short)-12602;
short var_16 = (short)-24996;
signed char var_17 = (signed char)118;
unsigned long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10352963128322883977ULL : 13516211458159696582ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
