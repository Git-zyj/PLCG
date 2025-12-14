#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6403150608957795459LL;
int var_1 = -1917593244;
unsigned int var_3 = 4057137645U;
int var_6 = -105665352;
int var_8 = 908552525;
short var_9 = (short)-13971;
signed char var_10 = (signed char)107;
unsigned short var_12 = (unsigned short)34919;
unsigned long long int var_13 = 10023458097805648581ULL;
signed char var_14 = (signed char)80;
int zero = 0;
unsigned int var_16 = 2813563928U;
unsigned short var_17 = (unsigned short)3805;
signed char var_18 = (signed char)-13;
unsigned short var_19 = (unsigned short)54208;
int var_20 = -293506876;
unsigned short var_21 = (unsigned short)8543;
unsigned char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)40;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
