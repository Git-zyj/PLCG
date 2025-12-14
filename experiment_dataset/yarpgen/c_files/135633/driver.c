#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1972069686;
int var_3 = -938059271;
int var_4 = 557900895;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_7 = 4992223428714150261ULL;
short var_9 = (short)6918;
short var_13 = (short)13563;
signed char var_16 = (signed char)39;
int var_17 = -1887315547;
int zero = 0;
signed char var_20 = (signed char)-21;
unsigned int var_21 = 4045529768U;
int var_22 = 2146858048;
unsigned short var_23 = (unsigned short)10591;
unsigned int var_24 = 2337879599U;
unsigned long long int var_25 = 3292409094008313811ULL;
unsigned short var_26 = (unsigned short)41677;
signed char arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3324649855U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)47;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
