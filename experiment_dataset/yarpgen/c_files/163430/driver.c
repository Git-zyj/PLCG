#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
unsigned long long int var_2 = 6222580601510971240ULL;
int var_4 = -368787712;
short var_5 = (short)22399;
unsigned char var_6 = (unsigned char)131;
int var_7 = 1745483379;
int var_8 = -562569733;
int var_9 = 1404519701;
unsigned char var_10 = (unsigned char)14;
unsigned char var_11 = (unsigned char)220;
unsigned long long int var_14 = 6730977237242608108ULL;
unsigned char var_15 = (unsigned char)14;
int var_16 = 803683226;
int var_17 = -460636710;
int var_18 = 58375686;
short var_19 = (short)28159;
int zero = 0;
short var_20 = (short)10662;
int var_21 = 1337685025;
unsigned char var_22 = (unsigned char)242;
int var_23 = -1179437713;
unsigned char var_24 = (unsigned char)197;
int arr_9 [17] [17] [17] [17] ;
unsigned char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1716048991 : 392710356;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)88 : (unsigned char)129;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
