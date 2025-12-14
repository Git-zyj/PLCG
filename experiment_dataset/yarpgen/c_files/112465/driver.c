#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
signed char var_3 = (signed char)-78;
unsigned int var_4 = 1815670544U;
unsigned int var_5 = 2217199728U;
unsigned int var_6 = 2202015914U;
signed char var_11 = (signed char)-107;
unsigned int var_12 = 3232003486U;
unsigned int var_13 = 458499708U;
unsigned long long int var_16 = 4315877291854456582ULL;
unsigned short var_18 = (unsigned short)34228;
int zero = 0;
unsigned long long int var_19 = 1520571646017662660ULL;
unsigned char var_20 = (unsigned char)202;
unsigned short var_21 = (unsigned short)55019;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2106687389U;
unsigned int arr_0 [22] ;
long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2656806110U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -3153773314291631987LL;
}

void checksum() {
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
