#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2270285984U;
unsigned long long int var_5 = 8214937591115354190ULL;
unsigned char var_12 = (unsigned char)188;
unsigned long long int var_14 = 588769310379538321ULL;
int zero = 0;
signed char var_15 = (signed char)-122;
long long int var_16 = -1835348472368537692LL;
unsigned short var_17 = (unsigned short)39700;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)46272;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1867430945128193891LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)140;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
