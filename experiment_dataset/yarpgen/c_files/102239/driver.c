#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23080;
long long int var_3 = 5406139788279172417LL;
unsigned char var_5 = (unsigned char)47;
unsigned char var_6 = (unsigned char)108;
short var_9 = (short)-2940;
unsigned char var_10 = (unsigned char)153;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)75;
_Bool var_15 = (_Bool)0;
short var_18 = (short)13053;
int zero = 0;
unsigned long long int var_19 = 568647573300161561ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-393;
short var_22 = (short)-2825;
unsigned char var_23 = (unsigned char)137;
_Bool var_24 = (_Bool)0;
short var_25 = (short)3441;
_Bool var_26 = (_Bool)1;
long long int var_27 = 4912520601072929259LL;
unsigned char var_28 = (unsigned char)74;
unsigned char var_29 = (unsigned char)39;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1735865758U;
_Bool var_32 = (_Bool)1;
unsigned char arr_12 [21] [21] ;
unsigned char arr_15 [21] [21] ;
unsigned char arr_19 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)253 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)164;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
