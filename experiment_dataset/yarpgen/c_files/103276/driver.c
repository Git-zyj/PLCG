#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13054;
unsigned short var_1 = (unsigned short)55760;
short var_3 = (short)-23187;
short var_5 = (short)9815;
unsigned char var_6 = (unsigned char)127;
unsigned short var_7 = (unsigned short)28617;
unsigned int var_8 = 1388408444U;
unsigned int var_9 = 4244229721U;
unsigned long long int var_12 = 2507021651419802936ULL;
short var_14 = (short)6982;
short var_15 = (short)-3851;
unsigned long long int var_16 = 3473015884640859589ULL;
int zero = 0;
unsigned long long int var_17 = 12596056679105993690ULL;
unsigned int var_18 = 873275251U;
unsigned int var_19 = 2957151797U;
long long int var_20 = -6775461349124042871LL;
unsigned int var_21 = 1198743958U;
_Bool var_22 = (_Bool)0;
unsigned int arr_2 [23] [23] ;
signed char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2024955842U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)55;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
