#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11411;
int var_1 = 204283572;
_Bool var_4 = (_Bool)0;
short var_5 = (short)10755;
signed char var_6 = (signed char)82;
long long int var_9 = -8517930168559573761LL;
unsigned int var_10 = 2110020565U;
int var_11 = -83551381;
unsigned int var_12 = 3822871744U;
unsigned int var_13 = 1748325434U;
short var_14 = (short)-12467;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
unsigned char var_17 = (unsigned char)68;
unsigned char var_18 = (unsigned char)213;
unsigned char var_19 = (unsigned char)146;
long long int var_20 = 3031671012830222078LL;
int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1112289501;
}

void checksum() {
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
