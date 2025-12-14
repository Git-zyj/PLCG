#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5753;
unsigned char var_3 = (unsigned char)172;
unsigned int var_4 = 3228084633U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 942672015U;
unsigned short var_8 = (unsigned short)59991;
unsigned char var_9 = (unsigned char)82;
int zero = 0;
unsigned int var_10 = 3339041567U;
short var_11 = (short)-12770;
unsigned char var_12 = (unsigned char)97;
unsigned int arr_4 [11] ;
unsigned char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1238565546U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)197;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
