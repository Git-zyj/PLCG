#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -961321071;
unsigned char var_4 = (unsigned char)105;
unsigned int var_7 = 3482624245U;
unsigned short var_8 = (unsigned short)40974;
long long int var_11 = -4332675718971869255LL;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
unsigned int var_17 = 2028684305U;
signed char var_18 = (signed char)97;
unsigned char var_19 = (unsigned char)7;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 22431643979426548ULL;
unsigned char var_22 = (unsigned char)162;
unsigned char var_23 = (unsigned char)139;
unsigned short var_24 = (unsigned short)32100;
unsigned long long int var_25 = 10437064276732830376ULL;
unsigned long long int var_26 = 17532136800902859946ULL;
long long int var_27 = 2517426868987741767LL;
unsigned char var_28 = (unsigned char)76;
unsigned int var_29 = 962189655U;
long long int var_30 = -4539921558175960403LL;
unsigned long long int var_31 = 5160781818213969865ULL;
unsigned short var_32 = (unsigned short)53315;
unsigned int var_33 = 3130815410U;
int arr_0 [20] [20] ;
unsigned long long int arr_6 [20] [20] [20] [20] ;
unsigned short arr_2 [20] ;
unsigned short arr_17 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -742992460;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 12855556741106032493ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)46688;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)7818 : (unsigned short)60901;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
