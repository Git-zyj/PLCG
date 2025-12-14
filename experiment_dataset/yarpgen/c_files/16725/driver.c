#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1066638574236253684ULL;
unsigned char var_3 = (unsigned char)243;
unsigned long long int var_5 = 13145935894408996317ULL;
short var_7 = (short)-18469;
unsigned char var_9 = (unsigned char)241;
short var_10 = (short)2970;
unsigned char var_11 = (unsigned char)165;
short var_12 = (short)-11517;
signed char var_13 = (signed char)108;
signed char var_16 = (signed char)120;
unsigned short var_17 = (unsigned short)40130;
int zero = 0;
unsigned long long int var_18 = 9728795121894808411ULL;
short var_19 = (short)-3064;
unsigned int var_20 = 3141339077U;
short var_21 = (short)-4021;
unsigned char var_22 = (unsigned char)112;
unsigned long long int var_23 = 9787904966628244859ULL;
_Bool arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned short arr_10 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 17400867717185146657ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)65150 : (unsigned short)27618;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
