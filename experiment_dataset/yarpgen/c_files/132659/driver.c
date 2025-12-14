#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8238;
unsigned short var_1 = (unsigned short)25411;
unsigned int var_2 = 1691066215U;
short var_3 = (short)-15455;
short var_4 = (short)22396;
unsigned short var_5 = (unsigned short)14676;
unsigned int var_6 = 1391282793U;
int var_7 = 1228619797;
signed char var_8 = (signed char)-3;
unsigned short var_9 = (unsigned short)41426;
unsigned short var_10 = (unsigned short)50317;
unsigned long long int var_11 = 8897391790764605882ULL;
int var_12 = -2057280247;
short var_13 = (short)2109;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4152586379U;
short var_16 = (short)468;
unsigned int var_17 = 373875014U;
int zero = 0;
short var_18 = (short)-4355;
_Bool var_19 = (_Bool)0;
long long int var_20 = 941240012848979196LL;
long long int var_21 = -8472323656359671631LL;
void init() {
}

void checksum() {
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
