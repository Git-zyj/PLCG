#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15024429318493653469ULL;
int var_1 = -1363646325;
short var_4 = (short)8393;
unsigned long long int var_6 = 13044039887407755308ULL;
unsigned int var_12 = 3063812946U;
int zero = 0;
unsigned short var_13 = (unsigned short)56180;
unsigned long long int var_14 = 18294851210485401681ULL;
unsigned long long int var_15 = 6954615878561654648ULL;
unsigned long long int var_16 = 4018679810905062664ULL;
unsigned short var_17 = (unsigned short)55665;
unsigned int arr_7 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2484496300U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
