#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58899;
long long int var_7 = 7070748883464068865LL;
unsigned short var_8 = (unsigned short)30006;
signed char var_9 = (signed char)109;
unsigned char var_14 = (unsigned char)37;
int zero = 0;
short var_17 = (short)6296;
unsigned int var_18 = 907104206U;
unsigned long long int var_19 = 15614746175150623598ULL;
unsigned int var_20 = 248395564U;
int var_21 = 1862538654;
signed char var_22 = (signed char)-58;
unsigned char var_23 = (unsigned char)210;
int arr_0 [22] ;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -581293491 : -148937353;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-19976;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
