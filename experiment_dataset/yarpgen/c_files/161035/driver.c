#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4096711782400680420LL;
short var_1 = (short)3423;
short var_3 = (short)18916;
long long int var_5 = 27798417081588434LL;
signed char var_7 = (signed char)53;
signed char var_11 = (signed char)61;
long long int var_12 = -7281142424842693669LL;
unsigned int var_13 = 3163100893U;
int zero = 0;
short var_15 = (short)2156;
unsigned char var_16 = (unsigned char)45;
signed char var_17 = (signed char)76;
unsigned char var_18 = (unsigned char)115;
unsigned char var_19 = (unsigned char)44;
long long int var_20 = -1698215113656886832LL;
signed char var_21 = (signed char)-80;
long long int var_22 = -5139230774929514968LL;
short var_23 = (short)17401;
signed char var_24 = (signed char)-91;
unsigned char arr_2 [11] [11] [11] ;
signed char arr_3 [11] ;
signed char arr_7 [20] ;
short arr_8 [20] ;
signed char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)31712;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-127;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
