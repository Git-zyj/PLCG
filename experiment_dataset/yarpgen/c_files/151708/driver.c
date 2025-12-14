#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1030636919;
int var_1 = -1906884973;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 5040862087126045699ULL;
int var_5 = 1409129217;
int var_7 = -244002342;
signed char var_8 = (signed char)21;
unsigned int var_10 = 1277181859U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)42211;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)95;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)21;
unsigned int arr_2 [21] ;
long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3250659937U : 840092451U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5109595651562911961LL;
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
