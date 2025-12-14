#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned char var_1 = (unsigned char)117;
signed char var_5 = (signed char)5;
signed char var_8 = (signed char)79;
int var_9 = 1408776227;
unsigned short var_12 = (unsigned short)64650;
unsigned short var_14 = (unsigned short)36320;
int zero = 0;
signed char var_20 = (signed char)-67;
signed char var_21 = (signed char)-121;
unsigned short var_22 = (unsigned short)56354;
int var_23 = -178998814;
unsigned short var_24 = (unsigned short)16916;
signed char var_25 = (signed char)7;
unsigned char arr_5 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)87;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
