#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1646716021U;
unsigned int var_3 = 599197759U;
signed char var_4 = (signed char)6;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)15383;
signed char var_9 = (signed char)-57;
unsigned long long int var_11 = 3803540317301931537ULL;
short var_12 = (short)13446;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
unsigned char var_15 = (unsigned char)191;
short var_16 = (short)-21958;
unsigned int var_17 = 1338749442U;
short var_18 = (short)1149;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
