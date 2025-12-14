#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20017;
unsigned char var_2 = (unsigned char)206;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)140;
short var_5 = (short)-20710;
unsigned char var_6 = (unsigned char)190;
unsigned char var_7 = (unsigned char)68;
unsigned char var_9 = (unsigned char)22;
short var_10 = (short)-20521;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10098010167329119458ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)-27554;
unsigned char var_17 = (unsigned char)52;
short var_18 = (short)-22767;
short var_19 = (short)24588;
short var_20 = (short)12022;
unsigned long long int var_21 = 17622540998724490808ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)8;
}

void checksum() {
    hash(&seed, var_16);
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
