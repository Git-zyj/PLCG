#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6610419945712202584LL;
unsigned long long int var_2 = 5147845749588731571ULL;
unsigned long long int var_3 = 13602344323920937664ULL;
long long int var_4 = -7108866678264404087LL;
unsigned int var_6 = 92223615U;
unsigned char var_7 = (unsigned char)112;
short var_8 = (short)14967;
short var_9 = (short)-19586;
unsigned int var_10 = 829658470U;
int zero = 0;
unsigned int var_15 = 816657631U;
short var_16 = (short)-18847;
int var_17 = -394532328;
unsigned char var_18 = (unsigned char)0;
signed char var_19 = (signed char)-51;
long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -4944517825219650308LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
