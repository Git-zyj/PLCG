#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
int var_1 = -1682157553;
int var_2 = 966961316;
long long int var_3 = 7606031264637994233LL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-18907;
unsigned char var_8 = (unsigned char)111;
signed char var_10 = (signed char)-11;
unsigned char var_11 = (unsigned char)185;
long long int var_12 = -1839449095992973642LL;
int zero = 0;
long long int var_17 = 551445479953825619LL;
unsigned char var_18 = (unsigned char)233;
long long int var_19 = -1317399659013744753LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
