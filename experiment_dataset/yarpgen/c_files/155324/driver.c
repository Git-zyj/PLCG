#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24366;
unsigned short var_1 = (unsigned short)46075;
unsigned short var_2 = (unsigned short)22736;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-15929;
unsigned char var_6 = (unsigned char)207;
signed char var_7 = (signed char)74;
short var_8 = (short)15284;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3835479370U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 977867484U;
int var_13 = -1039968984;
unsigned int var_14 = 3404287675U;
unsigned int var_15 = 2809796480U;
int zero = 0;
signed char var_16 = (signed char)-2;
signed char var_17 = (signed char)79;
signed char var_18 = (signed char)-72;
short var_19 = (short)22079;
long long int var_20 = 3570635064638203958LL;
signed char var_21 = (signed char)-7;
int var_22 = -1295770976;
long long int var_23 = -5595139414202931568LL;
unsigned int var_24 = 1830704337U;
unsigned long long int var_25 = 11949695878223841545ULL;
short var_26 = (short)-3346;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)47;
unsigned int var_29 = 957740514U;
unsigned char var_30 = (unsigned char)148;
unsigned int var_31 = 2755833556U;
signed char arr_4 [16] ;
int arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] [16] [16] [16] ;
unsigned long long int arr_16 [16] [16] ;
signed char arr_21 [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
signed char arr_17 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1870132120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6832981606051520804LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 585575405007231115ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1827653562;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-12;
}

void checksum() {
    hash(&seed, var_16);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
