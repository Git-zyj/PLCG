#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3011;
long long int var_2 = 637199279778625815LL;
long long int var_4 = 6354334567436034852LL;
int var_5 = -1938944779;
int var_8 = -746509350;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4375167398184564953LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28814;
long long int var_14 = -819369887684193845LL;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
