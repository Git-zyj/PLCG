#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17790216702491430014ULL;
short var_1 = (short)31277;
unsigned int var_4 = 3781646747U;
long long int var_7 = 3218626884557033192LL;
unsigned int var_8 = 1973907444U;
unsigned char var_9 = (unsigned char)109;
unsigned int var_10 = 4083193495U;
unsigned long long int var_11 = 6806544719160923429ULL;
unsigned int var_13 = 1821538354U;
unsigned long long int var_15 = 10725519115975311404ULL;
unsigned char var_16 = (unsigned char)134;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
short var_18 = (short)-5331;
unsigned int var_19 = 3631733298U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3418961799U;
unsigned int var_22 = 3850855435U;
unsigned short var_23 = (unsigned short)52590;
unsigned char var_24 = (unsigned char)134;
unsigned char var_25 = (unsigned char)93;
unsigned long long int var_26 = 13011701738324853159ULL;
unsigned int var_27 = 2619644014U;
long long int arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 7795875736437427881LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)48058;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)49543;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
