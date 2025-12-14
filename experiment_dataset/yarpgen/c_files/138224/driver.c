#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5987353566044339791LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -7635357926948453241LL;
long long int var_3 = 5765291971654593587LL;
signed char var_6 = (signed char)-69;
unsigned char var_7 = (unsigned char)95;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 14321422315762472869ULL;
int var_11 = -586051303;
short var_12 = (short)-9647;
int zero = 0;
signed char var_13 = (signed char)14;
_Bool var_14 = (_Bool)1;
long long int var_15 = 884899147783473134LL;
unsigned int var_16 = 423115762U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)110;
unsigned char var_20 = (unsigned char)31;
unsigned short var_21 = (unsigned short)35439;
long long int var_22 = 984898306027903403LL;
unsigned long long int var_23 = 8383894364164325946ULL;
unsigned int var_24 = 2775794344U;
long long int var_25 = 3182359922614356210LL;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-58;
unsigned char var_28 = (unsigned char)67;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-18;
unsigned short var_31 = (unsigned short)4715;
short var_32 = (short)-815;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)142;
long long int var_35 = 4548432108171438842LL;
unsigned char var_36 = (unsigned char)33;
unsigned int var_37 = 498418918U;
signed char arr_0 [22] [22] ;
_Bool arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_3 [15] ;
short arr_6 [15] [15] ;
long long int arr_8 [15] [15] ;
signed char arr_9 [15] [15] ;
unsigned long long int arr_10 [15] [15] ;
signed char arr_13 [15] [15] [15] ;
unsigned int arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)41978;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 14110438114381682432ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)17702;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = -6522281070283392633LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 10809079409110729499ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 1288750541U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
