#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -355892111782721127LL;
unsigned char var_3 = (unsigned char)106;
int var_5 = -913061204;
long long int var_6 = -1771175631691521551LL;
unsigned char var_11 = (unsigned char)55;
short var_12 = (short)-17678;
short var_13 = (short)6461;
int zero = 0;
unsigned short var_14 = (unsigned short)32678;
unsigned long long int var_15 = 17898304851006443707ULL;
unsigned short var_16 = (unsigned short)7140;
unsigned short var_17 = (unsigned short)37407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
