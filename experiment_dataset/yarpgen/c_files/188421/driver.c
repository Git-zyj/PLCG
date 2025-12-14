#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166734736;
unsigned long long int var_1 = 6614862169287109600ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2303185522U;
int var_5 = -935696417;
unsigned long long int var_7 = 2019815908779440852ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 4032052382U;
unsigned short var_10 = (unsigned short)9610;
signed char var_12 = (signed char)27;
signed char var_13 = (signed char)-105;
short var_14 = (short)-15009;
long long int var_15 = -5932896172416099153LL;
short var_16 = (short)-30614;
int zero = 0;
short var_17 = (short)-27377;
unsigned long long int var_18 = 9831369343826479520ULL;
unsigned short arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7283 : (unsigned short)56946;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
