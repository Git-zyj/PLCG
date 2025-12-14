#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3364068164395853622LL;
unsigned char var_1 = (unsigned char)105;
short var_2 = (short)-259;
short var_5 = (short)4085;
short var_6 = (short)-5111;
long long int var_7 = -8556528827439305198LL;
short var_8 = (short)4771;
short var_9 = (short)-9874;
unsigned char var_11 = (unsigned char)204;
unsigned int var_17 = 4183997079U;
int zero = 0;
unsigned int var_18 = 2215913448U;
unsigned int var_19 = 1807938889U;
unsigned int var_20 = 2792028785U;
short var_21 = (short)18333;
unsigned long long int var_22 = 6058485979774097925ULL;
short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)11760;
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
