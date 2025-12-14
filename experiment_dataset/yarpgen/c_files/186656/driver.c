#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4129870268U;
int var_3 = -1043710478;
unsigned long long int var_4 = 943492493584032860ULL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-17961;
unsigned char var_7 = (unsigned char)151;
signed char var_8 = (signed char)98;
long long int var_9 = 1612074220874175351LL;
unsigned short var_10 = (unsigned short)54239;
long long int var_12 = -1855788428889998258LL;
long long int var_13 = 7138977305297167265LL;
int zero = 0;
unsigned char var_14 = (unsigned char)67;
unsigned short var_15 = (unsigned short)12907;
unsigned short var_16 = (unsigned short)35846;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
