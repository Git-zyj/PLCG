#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned long long int var_1 = 11088623096752813481ULL;
unsigned char var_3 = (unsigned char)141;
unsigned char var_4 = (unsigned char)93;
unsigned long long int var_6 = 5540075946959888523ULL;
int var_7 = -1524956426;
unsigned long long int var_8 = 13958539416740031511ULL;
long long int var_9 = 4382308773695489576LL;
int var_10 = 787637985;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
unsigned long long int var_14 = 9582502921639543971ULL;
signed char var_15 = (signed char)124;
int var_16 = -313441364;
int var_17 = 1750440138;
unsigned char var_18 = (unsigned char)101;
signed char var_19 = (signed char)-82;
int var_20 = -1622769072;
unsigned int var_21 = 570001364U;
unsigned char var_22 = (unsigned char)106;
int var_23 = 1466607307;
signed char var_24 = (signed char)-10;
unsigned char var_25 = (unsigned char)182;
signed char arr_0 [12] ;
long long int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
long long int arr_3 [12] ;
unsigned char arr_4 [12] ;
signed char arr_5 [12] ;
long long int arr_6 [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -8107497085121552211LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -1688868532617963276LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 2425320346076428834LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)25;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
