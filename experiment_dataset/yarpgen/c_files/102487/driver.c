#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4176168246910156143ULL;
long long int var_1 = 6433177730730660660LL;
unsigned short var_2 = (unsigned short)11452;
short var_3 = (short)-19314;
int var_7 = -1241739835;
unsigned int var_8 = 4238180846U;
unsigned char var_16 = (unsigned char)240;
short var_18 = (short)1074;
int zero = 0;
long long int var_20 = 2765175347545734460LL;
unsigned long long int var_21 = 12345065911514285670ULL;
unsigned short var_22 = (unsigned short)954;
unsigned int var_23 = 3734033613U;
int arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1876970821;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 274093769U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
