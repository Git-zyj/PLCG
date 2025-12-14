#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14860483718197321297ULL;
int var_4 = 1452814795;
short var_6 = (short)13071;
signed char var_8 = (signed char)-48;
short var_14 = (short)7149;
int var_15 = 1114479807;
int zero = 0;
unsigned char var_16 = (unsigned char)196;
signed char var_17 = (signed char)-54;
int var_18 = -1583027677;
unsigned char var_19 = (unsigned char)121;
short var_20 = (short)-18249;
short var_21 = (short)29418;
signed char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-48;
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
