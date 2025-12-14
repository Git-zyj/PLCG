#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11058;
int var_1 = 1929256947;
unsigned char var_3 = (unsigned char)115;
unsigned short var_4 = (unsigned short)57582;
unsigned short var_5 = (unsigned short)44380;
signed char var_7 = (signed char)72;
unsigned int var_8 = 3297596012U;
unsigned char var_9 = (unsigned char)220;
unsigned char var_10 = (unsigned char)73;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)73;
int zero = 0;
unsigned char var_14 = (unsigned char)95;
unsigned char var_15 = (unsigned char)180;
unsigned short var_16 = (unsigned short)53539;
unsigned short var_17 = (unsigned short)42401;
signed char var_18 = (signed char)-29;
long long int var_19 = -6772772467368949612LL;
_Bool arr_0 [16] ;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1031333571;
}

void checksum() {
    hash(&seed, var_14);
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
