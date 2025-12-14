#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -766944243;
unsigned long long int var_5 = 7888975299351519994ULL;
unsigned short var_7 = (unsigned short)4475;
unsigned long long int var_8 = 17265366168565507157ULL;
signed char var_9 = (signed char)2;
int var_11 = 86693153;
unsigned short var_13 = (unsigned short)5146;
unsigned long long int var_14 = 2570917253026706001ULL;
unsigned long long int var_15 = 13162859278022034299ULL;
unsigned int var_16 = 1385995428U;
unsigned int var_19 = 4147872067U;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
unsigned short var_21 = (unsigned short)23677;
long long int var_22 = 3014567337967544903LL;
unsigned long long int var_23 = 10154564617246998451ULL;
int var_24 = 921974535;
unsigned short var_25 = (unsigned short)42025;
int var_26 = -34222934;
int var_27 = -492108954;
long long int var_28 = -4505550903362067655LL;
unsigned int var_29 = 1069117069U;
unsigned char var_30 = (unsigned char)163;
unsigned int var_31 = 514583508U;
int var_32 = 308837475;
unsigned char var_33 = (unsigned char)148;
unsigned int var_34 = 4244245615U;
unsigned int var_35 = 185993325U;
unsigned int var_36 = 3520121705U;
unsigned long long int arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
int arr_2 [21] ;
unsigned short arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] [21] ;
unsigned short arr_6 [21] ;
unsigned int arr_13 [21] [21] [21] [21] [21] ;
unsigned int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 13361971030051667ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -99008744 : -362162209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30316 : (unsigned short)41780;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 5528011315822044995ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24883 : (unsigned short)56577;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1822206978U : 2906262584U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3670049541U : 272133613U;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
