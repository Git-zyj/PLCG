#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28299;
unsigned short var_2 = (unsigned short)17988;
unsigned int var_6 = 952323220U;
short var_9 = (short)-30508;
long long int var_10 = -5872178708836597987LL;
unsigned char var_11 = (unsigned char)80;
signed char var_12 = (signed char)-54;
unsigned char var_16 = (unsigned char)177;
short var_17 = (short)-11265;
long long int var_19 = -4481079796939817536LL;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)240;
signed char var_23 = (signed char)-34;
short var_24 = (short)-13481;
short var_25 = (short)-28161;
unsigned short var_26 = (unsigned short)26731;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)137;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
