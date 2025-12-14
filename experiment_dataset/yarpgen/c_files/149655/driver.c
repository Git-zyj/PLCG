#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46352;
unsigned int var_6 = 1314268736U;
unsigned short var_7 = (unsigned short)18071;
unsigned char var_8 = (unsigned char)216;
unsigned short var_13 = (unsigned short)3551;
int zero = 0;
int var_16 = 1683033909;
unsigned short var_17 = (unsigned short)7071;
unsigned long long int var_18 = 17865622365173063336ULL;
unsigned short var_19 = (unsigned short)38084;
long long int var_20 = 682011570036950309LL;
int var_21 = 443972785;
signed char var_22 = (signed char)27;
unsigned char var_23 = (unsigned char)9;
short arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-8994;
}

void checksum() {
    hash(&seed, var_16);
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
