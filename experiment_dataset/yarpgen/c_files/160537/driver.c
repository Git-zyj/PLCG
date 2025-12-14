#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6210;
signed char var_6 = (signed char)-55;
signed char var_7 = (signed char)34;
signed char var_9 = (signed char)121;
short var_10 = (short)-28611;
signed char var_11 = (signed char)-101;
signed char var_12 = (signed char)69;
int var_13 = 508624421;
short var_14 = (short)-5422;
int zero = 0;
long long int var_17 = 5696541531561688299LL;
signed char var_18 = (signed char)-104;
unsigned int var_19 = 2113734650U;
long long int var_20 = 6982429130777805088LL;
unsigned char var_21 = (unsigned char)33;
unsigned int var_22 = 3671821221U;
unsigned char arr_0 [25] [25] ;
int arr_1 [25] ;
long long int arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -2095641507;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2365198758834885211LL : 2073928679115964788LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
