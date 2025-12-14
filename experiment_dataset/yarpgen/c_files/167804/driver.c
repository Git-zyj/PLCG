#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3537144969672624268LL;
unsigned long long int var_1 = 12846323645888964929ULL;
signed char var_3 = (signed char)17;
unsigned int var_4 = 3323584963U;
unsigned long long int var_5 = 99745073305242998ULL;
short var_7 = (short)23720;
short var_9 = (short)13156;
signed char var_11 = (signed char)-112;
unsigned char var_12 = (unsigned char)176;
unsigned long long int var_13 = 15678675740042168309ULL;
int zero = 0;
signed char var_14 = (signed char)-14;
short var_15 = (short)18406;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)204;
signed char var_18 = (signed char)-55;
signed char var_19 = (signed char)103;
signed char arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
short arr_3 [10] [10] [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)50628;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-15978;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 138641729U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
