#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 812592479;
short var_3 = (short)-18958;
signed char var_4 = (signed char)-127;
unsigned short var_5 = (unsigned short)65214;
signed char var_6 = (signed char)103;
short var_7 = (short)-12114;
int var_9 = 372188750;
unsigned short var_12 = (unsigned short)40657;
unsigned char var_15 = (unsigned char)93;
short var_17 = (short)9012;
long long int var_19 = -6198053536932620324LL;
int zero = 0;
signed char var_20 = (signed char)-53;
int var_21 = 1505170753;
void init() {
}

void checksum() {
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
