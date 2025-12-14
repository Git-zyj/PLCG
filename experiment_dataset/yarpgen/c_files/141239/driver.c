#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16515;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3421359211U;
signed char var_4 = (signed char)98;
unsigned char var_5 = (unsigned char)227;
_Bool var_6 = (_Bool)0;
int var_7 = -1796044478;
short var_10 = (short)20021;
signed char var_11 = (signed char)-96;
unsigned long long int var_15 = 4390887644296093513ULL;
_Bool var_16 = (_Bool)1;
int var_18 = -1839194421;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
unsigned char var_20 = (unsigned char)217;
unsigned char var_21 = (unsigned char)115;
void init() {
}

void checksum() {
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
