#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -662236742800264187LL;
unsigned long long int var_1 = 16130801574831937666ULL;
int var_2 = 1306069685;
long long int var_4 = 8303476306915116313LL;
int var_5 = 1852559374;
unsigned short var_6 = (unsigned short)64684;
long long int var_7 = -8110545576207599549LL;
unsigned char var_8 = (unsigned char)126;
unsigned int var_11 = 178980415U;
int zero = 0;
unsigned long long int var_12 = 11017762540876849972ULL;
long long int var_13 = -8176814487188523309LL;
unsigned char var_14 = (unsigned char)72;
unsigned char var_15 = (unsigned char)152;
unsigned int var_16 = 174347730U;
long long int var_17 = -6124022823097495871LL;
long long int arr_0 [22] [22] ;
unsigned long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 7024787937359301567LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 8291388885551188387ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1283455959U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
