#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51106;
short var_6 = (short)27380;
unsigned short var_7 = (unsigned short)35511;
signed char var_8 = (signed char)61;
int zero = 0;
unsigned int var_11 = 4201853466U;
unsigned char var_12 = (unsigned char)191;
long long int var_13 = -4152413431613759780LL;
signed char var_14 = (signed char)-123;
unsigned short var_15 = (unsigned short)55883;
unsigned long long int var_16 = 9689841777363872425ULL;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
