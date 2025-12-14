#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-18;
unsigned char var_4 = (unsigned char)6;
short var_5 = (short)-13129;
unsigned char var_7 = (unsigned char)233;
unsigned short var_10 = (unsigned short)49082;
unsigned long long int var_12 = 3792325951488465071ULL;
unsigned int var_13 = 3886236982U;
short var_14 = (short)15523;
unsigned char var_16 = (unsigned char)224;
short var_17 = (short)-7470;
int zero = 0;
unsigned int var_18 = 2828691674U;
unsigned short var_19 = (unsigned short)31260;
unsigned int var_20 = 1989438761U;
signed char var_21 = (signed char)106;
unsigned short var_22 = (unsigned short)29457;
void init() {
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
