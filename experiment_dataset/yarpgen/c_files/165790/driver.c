#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20869;
unsigned char var_7 = (unsigned char)60;
signed char var_10 = (signed char)108;
long long int var_11 = -8236081611123626437LL;
short var_15 = (short)9458;
unsigned short var_16 = (unsigned short)8817;
int zero = 0;
short var_17 = (short)-24122;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)34943;
short var_20 = (short)21759;
unsigned short var_21 = (unsigned short)19243;
long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1063337303443337001LL;
}

void checksum() {
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
