#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3606718595130429610LL;
unsigned long long int var_1 = 11667253478289102378ULL;
short var_4 = (short)-2470;
unsigned long long int var_5 = 10071097207117959292ULL;
unsigned long long int var_7 = 8557476511465690009ULL;
unsigned char var_8 = (unsigned char)124;
unsigned long long int var_11 = 18092495890059034463ULL;
long long int var_12 = 9154715236567710658LL;
int zero = 0;
unsigned long long int var_14 = 11641276297131254209ULL;
unsigned long long int var_15 = 2410503172636171144ULL;
unsigned char var_16 = (unsigned char)221;
signed char var_17 = (signed char)-118;
long long int var_18 = 2778227281675736774LL;
signed char var_19 = (signed char)-79;
unsigned int var_20 = 2902411931U;
unsigned long long int var_21 = 3075100121461674664ULL;
signed char var_22 = (signed char)118;
signed char arr_23 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)-110;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
