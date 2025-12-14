#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -108874651190334574LL;
unsigned int var_4 = 3989214972U;
short var_5 = (short)-25706;
short var_6 = (short)-4834;
unsigned long long int var_7 = 6206429233889061349ULL;
unsigned short var_8 = (unsigned short)59685;
unsigned char var_9 = (unsigned char)150;
long long int var_11 = -7154522993070117014LL;
unsigned char var_12 = (unsigned char)228;
int zero = 0;
short var_14 = (short)-13490;
short var_15 = (short)27842;
short var_16 = (short)-12275;
short var_17 = (short)-27281;
short var_18 = (short)-16310;
unsigned char var_19 = (unsigned char)53;
unsigned int var_20 = 897563512U;
unsigned long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 15520852569541943926ULL;
}

void checksum() {
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
