#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
long long int var_1 = -5493702215976713255LL;
unsigned long long int var_4 = 896853572976524332ULL;
short var_5 = (short)-5691;
unsigned int var_6 = 766093984U;
short var_7 = (short)3904;
short var_8 = (short)21896;
int var_9 = -110627868;
long long int var_12 = -4930697905030149413LL;
unsigned char var_13 = (unsigned char)249;
unsigned char var_15 = (unsigned char)62;
unsigned int var_16 = 1435730537U;
int zero = 0;
unsigned long long int var_17 = 8191715475342468885ULL;
unsigned int var_18 = 4035264836U;
signed char var_19 = (signed char)-4;
unsigned short var_20 = (unsigned short)56044;
unsigned short var_21 = (unsigned short)40020;
void init() {
}

void checksum() {
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
