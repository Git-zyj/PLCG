#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13132;
short var_1 = (short)-25053;
unsigned int var_2 = 1332756214U;
unsigned long long int var_4 = 15355874165479788525ULL;
int var_5 = 522220366;
int var_8 = 2046993381;
unsigned short var_11 = (unsigned short)47107;
long long int var_12 = 6237514743182968154LL;
short var_16 = (short)24165;
unsigned short var_17 = (unsigned short)9443;
unsigned char var_18 = (unsigned char)171;
int zero = 0;
short var_19 = (short)-2498;
short var_20 = (short)-3647;
int var_21 = -1539414093;
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
