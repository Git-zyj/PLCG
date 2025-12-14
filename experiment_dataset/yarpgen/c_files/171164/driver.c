#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9252792890955950243ULL;
signed char var_1 = (signed char)-32;
unsigned long long int var_2 = 6722531577316941898ULL;
signed char var_3 = (signed char)68;
unsigned char var_7 = (unsigned char)172;
unsigned int var_9 = 1265630774U;
long long int var_11 = 3270074241533444544LL;
signed char var_12 = (signed char)-97;
unsigned short var_19 = (unsigned short)41524;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)31;
unsigned long long int var_22 = 13580501774030866357ULL;
unsigned short var_23 = (unsigned short)7668;
unsigned int var_24 = 503477333U;
unsigned char arr_0 [12] [12] ;
short arr_1 [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-4670;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 15042647771602653001ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
