#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44773;
short var_8 = (short)8212;
signed char var_9 = (signed char)-91;
long long int var_11 = -3808702444068724235LL;
long long int var_12 = -2171375207659439343LL;
int zero = 0;
signed char var_14 = (signed char)-10;
signed char var_15 = (signed char)57;
signed char var_16 = (signed char)68;
unsigned short var_17 = (unsigned short)60011;
unsigned short var_18 = (unsigned short)37115;
signed char var_19 = (signed char)-10;
long long int arr_0 [16] ;
signed char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1937157031600165362LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)122;
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
