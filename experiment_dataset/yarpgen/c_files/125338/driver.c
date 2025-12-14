#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
int var_4 = -1808830952;
long long int var_7 = 7471119440834148798LL;
unsigned short var_13 = (unsigned short)43104;
unsigned long long int var_14 = 4637788987521773086ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)118;
unsigned long long int var_19 = 8244356379871563200ULL;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 449172076U;
int var_22 = 929832043;
int var_23 = -1233433263;
signed char var_24 = (signed char)54;
long long int var_25 = 9201518232161915938LL;
unsigned int arr_6 [11] [11] ;
long long int arr_10 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 3749294490U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -231913498995840576LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
