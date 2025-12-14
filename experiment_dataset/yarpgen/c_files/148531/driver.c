#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -552965900;
short var_1 = (short)22450;
int var_2 = 1292727888;
int var_3 = -358346963;
int var_6 = 823451435;
unsigned short var_7 = (unsigned short)20001;
unsigned short var_8 = (unsigned short)18425;
short var_9 = (short)-22513;
unsigned short var_11 = (unsigned short)21213;
short var_12 = (short)9496;
signed char var_14 = (signed char)40;
unsigned short var_15 = (unsigned short)38046;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
unsigned long long int var_18 = 4226449746956614327ULL;
int var_19 = 284576022;
unsigned short var_20 = (unsigned short)11686;
short var_21 = (short)-8786;
unsigned short var_22 = (unsigned short)31081;
signed char arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3610483161485225844LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)21111;
}

void checksum() {
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
