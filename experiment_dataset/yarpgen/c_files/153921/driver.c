#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)114;
signed char var_4 = (signed char)-47;
short var_5 = (short)3139;
unsigned char var_6 = (unsigned char)120;
short var_8 = (short)19394;
long long int var_9 = -786197662472050009LL;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned char var_13 = (unsigned char)222;
unsigned char var_14 = (unsigned char)146;
short var_15 = (short)15188;
short var_16 = (short)21378;
short var_17 = (short)21439;
signed char var_18 = (signed char)-61;
unsigned char var_19 = (unsigned char)200;
unsigned char var_20 = (unsigned char)184;
_Bool var_21 = (_Bool)0;
long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4188232977760332718LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
