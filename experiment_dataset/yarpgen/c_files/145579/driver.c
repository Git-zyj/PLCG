#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
unsigned long long int var_3 = 2403775729071197542ULL;
unsigned char var_5 = (unsigned char)241;
unsigned int var_7 = 2668408756U;
short var_9 = (short)-19938;
long long int var_10 = -7114053516879785173LL;
unsigned long long int var_16 = 2609851019791271518ULL;
unsigned char var_17 = (unsigned char)128;
int zero = 0;
unsigned long long int var_18 = 8234753418489971217ULL;
unsigned long long int var_19 = 10241876658942433875ULL;
int var_20 = 966506588;
signed char arr_0 [20] [20] ;
short arr_2 [20] ;
unsigned int arr_4 [20] [20] [20] ;
long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-30881 : (short)11720;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2609987692U : 2794255429U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3473174334526037890LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
