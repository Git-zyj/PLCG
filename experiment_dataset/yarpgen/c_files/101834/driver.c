#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34793;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4915996361719523247ULL;
unsigned char var_9 = (unsigned char)15;
signed char var_10 = (signed char)48;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-4;
unsigned long long int var_14 = 9974082955842512584ULL;
unsigned char var_15 = (unsigned char)17;
int var_16 = -1400620949;
short var_17 = (short)-22765;
unsigned char var_18 = (unsigned char)55;
unsigned char var_19 = (unsigned char)20;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15333897142265462427ULL;
unsigned long long int arr_2 [24] ;
unsigned char arr_5 [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] [24] ;
unsigned int arr_7 [24] ;
unsigned long long int arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 12466360424848420854ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2136276410U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 8247316651619122365ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
