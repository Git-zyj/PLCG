#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44158;
unsigned short var_5 = (unsigned short)22358;
int var_6 = 1748132295;
unsigned int var_10 = 2054398543U;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
signed char var_12 = (signed char)76;
unsigned short var_13 = (unsigned short)13658;
unsigned long long int var_14 = 7165817368569490206ULL;
long long int var_15 = -1341100634659612982LL;
signed char var_16 = (signed char)121;
unsigned short arr_2 [16] ;
unsigned long long int arr_3 [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)59344;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 8356254655300100497ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)3;
}

void checksum() {
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
