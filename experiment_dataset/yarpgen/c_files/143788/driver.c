#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
unsigned long long int var_2 = 16407196130847105182ULL;
unsigned long long int var_3 = 9335746155887028903ULL;
unsigned long long int var_5 = 8491978780363021422ULL;
signed char var_6 = (signed char)112;
signed char var_7 = (signed char)61;
unsigned long long int var_8 = 3451488229415403901ULL;
unsigned long long int var_9 = 1985614511782163833ULL;
unsigned int var_12 = 1154947090U;
int zero = 0;
unsigned int var_13 = 1657507240U;
unsigned char var_14 = (unsigned char)21;
unsigned short var_15 = (unsigned short)46803;
unsigned char var_16 = (unsigned char)187;
unsigned long long int var_17 = 16546147800693480547ULL;
unsigned short var_18 = (unsigned short)14261;
signed char arr_0 [24] ;
signed char arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-16 : (signed char)-72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)13;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
