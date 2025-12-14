#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2104;
unsigned char var_1 = (unsigned char)163;
unsigned short var_2 = (unsigned short)5868;
unsigned char var_3 = (unsigned char)168;
unsigned char var_4 = (unsigned char)220;
signed char var_5 = (signed char)17;
unsigned short var_6 = (unsigned short)24729;
unsigned long long int var_7 = 7756435839139551725ULL;
unsigned short var_9 = (unsigned short)27777;
signed char var_10 = (signed char)84;
unsigned char var_11 = (unsigned char)165;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-18;
unsigned char var_14 = (unsigned char)187;
short var_16 = (short)7299;
unsigned char var_17 = (unsigned char)159;
unsigned char var_18 = (unsigned char)182;
int zero = 0;
signed char var_19 = (signed char)-82;
short var_20 = (short)30828;
signed char var_21 = (signed char)-69;
unsigned short var_22 = (unsigned short)39309;
unsigned char var_23 = (unsigned char)48;
_Bool var_24 = (_Bool)0;
int var_25 = -1595027159;
short var_26 = (short)9014;
signed char var_27 = (signed char)-120;
int var_28 = -772100702;
long long int var_29 = -3733203894971964609LL;
unsigned char var_30 = (unsigned char)185;
signed char var_31 = (signed char)57;
int arr_13 [25] [25] ;
unsigned char arr_14 [25] [25] ;
int arr_17 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 305784573 : -2004254328;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)242 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 1520752354;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
