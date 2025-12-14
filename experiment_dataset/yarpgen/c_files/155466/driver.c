#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1639449067622222337ULL;
signed char var_1 = (signed char)-10;
unsigned char var_2 = (unsigned char)180;
unsigned short var_3 = (unsigned short)4359;
unsigned short var_4 = (unsigned short)47127;
unsigned long long int var_5 = 3708966485586911171ULL;
short var_6 = (short)-4713;
long long int var_7 = 3051800293197425942LL;
short var_8 = (short)-728;
short var_9 = (short)-29240;
unsigned short var_10 = (unsigned short)35390;
int zero = 0;
signed char var_11 = (signed char)25;
unsigned int var_12 = 3659363015U;
unsigned char var_13 = (unsigned char)35;
short var_14 = (short)-8560;
unsigned long long int var_15 = 4595140432565380735ULL;
unsigned long long int arr_1 [12] ;
int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10689514638257879899ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -1526745974;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
