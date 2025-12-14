#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1215186779;
long long int var_1 = -525498649454243474LL;
signed char var_2 = (signed char)-3;
signed char var_3 = (signed char)56;
unsigned int var_4 = 178046182U;
long long int var_6 = 5565619833317790421LL;
unsigned char var_7 = (unsigned char)209;
signed char var_8 = (signed char)37;
unsigned int var_11 = 4204811712U;
unsigned short var_12 = (unsigned short)14203;
long long int var_14 = -8967159329291356151LL;
unsigned char var_16 = (unsigned char)193;
long long int var_18 = -1727302087903577417LL;
int zero = 0;
unsigned short var_19 = (unsigned short)20846;
unsigned int var_20 = 125762148U;
unsigned long long int var_21 = 4977767815122632886ULL;
unsigned short var_22 = (unsigned short)58414;
unsigned char var_23 = (unsigned char)5;
long long int var_24 = -2138066060543514396LL;
unsigned char var_25 = (unsigned char)150;
long long int arr_1 [25] ;
long long int arr_2 [25] [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 278306091551428133LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -5219032328745852156LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3023023854781668472ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
