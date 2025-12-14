#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11488453936653528462ULL;
unsigned char var_4 = (unsigned char)52;
short var_6 = (short)1641;
signed char var_8 = (signed char)108;
unsigned long long int var_9 = 1178802563328521011ULL;
long long int var_10 = 8033132025365976390LL;
signed char var_12 = (signed char)86;
int zero = 0;
short var_16 = (short)-10309;
long long int var_17 = -8364571208117888190LL;
short var_18 = (short)23676;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)47175;
unsigned char var_21 = (unsigned char)217;
unsigned char arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)182;
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
