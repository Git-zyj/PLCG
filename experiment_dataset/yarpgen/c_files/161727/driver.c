#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
short var_3 = (short)10269;
short var_4 = (short)-19380;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1783022001U;
short var_12 = (short)7164;
long long int var_13 = -5133025070853622803LL;
unsigned long long int var_14 = 5245200578109545912ULL;
int var_15 = 690269164;
signed char var_16 = (signed char)-121;
int arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 854463503 : 347420411;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
