#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7807483968010214465LL;
short var_3 = (short)-5162;
unsigned short var_6 = (unsigned short)63705;
unsigned short var_12 = (unsigned short)21806;
long long int var_14 = 6028777192623653223LL;
int zero = 0;
signed char var_17 = (signed char)-36;
short var_18 = (short)-22046;
short var_19 = (short)-17637;
short var_20 = (short)-26732;
unsigned short var_21 = (unsigned short)57204;
signed char var_22 = (signed char)-77;
short var_23 = (short)28659;
short var_24 = (short)-6305;
long long int var_25 = -2493658915158498083LL;
short var_26 = (short)-16268;
short var_27 = (short)3207;
signed char var_28 = (signed char)5;
short var_29 = (short)15306;
unsigned short arr_1 [12] [12] ;
long long int arr_2 [12] [12] ;
short arr_7 [12] ;
long long int arr_8 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)17062;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2290374379705895814LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)20446;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3521735014327625995LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
