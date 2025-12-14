#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
short var_2 = (short)15262;
unsigned char var_5 = (unsigned char)237;
unsigned char var_7 = (unsigned char)108;
signed char var_9 = (signed char)91;
unsigned char var_11 = (unsigned char)253;
int var_12 = 1964876158;
int zero = 0;
unsigned short var_14 = (unsigned short)6926;
long long int var_15 = -202714020040569553LL;
unsigned short var_16 = (unsigned short)15968;
unsigned char var_17 = (unsigned char)154;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
