#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned char var_2 = (unsigned char)168;
signed char var_3 = (signed char)-104;
signed char var_4 = (signed char)-100;
unsigned short var_5 = (unsigned short)63699;
unsigned int var_6 = 1351460086U;
int var_7 = 775221161;
unsigned short var_9 = (unsigned short)18621;
short var_10 = (short)9900;
int zero = 0;
unsigned int var_11 = 3401401702U;
unsigned char var_12 = (unsigned char)52;
unsigned short var_13 = (unsigned short)9810;
unsigned long long int var_14 = 17133282168267813970ULL;
unsigned long long int var_15 = 5397429590963372056ULL;
signed char var_16 = (signed char)-53;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
unsigned short arr_3 [17] [17] ;
signed char arr_4 [17] [17] ;
unsigned long long int arr_2 [12] [12] ;
signed char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1400453255U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25720;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 7739144471107034630ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
