#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -174050751;
unsigned char var_4 = (unsigned char)198;
short var_6 = (short)5515;
short var_7 = (short)25062;
unsigned char var_8 = (unsigned char)228;
short var_9 = (short)-18788;
int var_10 = 1029368951;
short var_11 = (short)-19113;
unsigned long long int var_12 = 15526991858534138200ULL;
int var_13 = -161054604;
short var_16 = (short)-7171;
unsigned long long int var_17 = 11632784972825089351ULL;
unsigned long long int var_18 = 12468700520837429671ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)18619;
unsigned int var_20 = 164918938U;
int var_21 = 922803487;
unsigned char var_22 = (unsigned char)84;
unsigned long long int var_23 = 3998590744686070422ULL;
unsigned long long int var_24 = 1389598483228131873ULL;
short var_25 = (short)-25484;
int var_26 = -623016170;
long long int var_27 = 3412552770514715420LL;
unsigned char var_28 = (unsigned char)82;
unsigned int var_29 = 1891166982U;
unsigned short var_30 = (unsigned short)23229;
short var_31 = (short)-26088;
signed char var_32 = (signed char)-51;
int arr_0 [21] [21] ;
short arr_2 [21] ;
unsigned char arr_3 [21] ;
signed char arr_4 [21] ;
short arr_5 [21] [21] [21] ;
short arr_8 [16] [16] ;
_Bool arr_10 [16] ;
_Bool arr_11 [16] ;
unsigned char arr_13 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1508647636;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)20106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)126 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-3374;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-4239;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)112;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
