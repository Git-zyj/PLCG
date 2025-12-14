#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
short var_3 = (short)-19273;
unsigned short var_9 = (unsigned short)52125;
unsigned long long int var_10 = 13291557437947203136ULL;
unsigned short var_12 = (unsigned short)59610;
int zero = 0;
signed char var_13 = (signed char)29;
int var_14 = 129381746;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)181;
int var_17 = 1512265307;
unsigned short var_18 = (unsigned short)33957;
short var_19 = (short)-12624;
unsigned int var_20 = 1864005266U;
unsigned char arr_9 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)186 : (unsigned char)52;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
