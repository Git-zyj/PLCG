#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28058;
signed char var_3 = (signed char)93;
unsigned int var_7 = 685805779U;
unsigned short var_9 = (unsigned short)51226;
unsigned long long int var_10 = 12493292542576843932ULL;
signed char var_11 = (signed char)30;
unsigned int var_12 = 3818397303U;
unsigned int var_13 = 2669368755U;
signed char var_14 = (signed char)-104;
short var_15 = (short)2186;
int zero = 0;
signed char var_17 = (signed char)-82;
unsigned short var_18 = (unsigned short)62747;
unsigned int var_19 = 2705585792U;
unsigned char var_20 = (unsigned char)189;
unsigned short var_21 = (unsigned short)45650;
unsigned char arr_1 [22] ;
unsigned short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)50651;
}

void checksum() {
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
