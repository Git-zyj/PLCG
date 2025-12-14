#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9173;
short var_3 = (short)28296;
short var_4 = (short)-9649;
short var_5 = (short)9038;
short var_6 = (short)9897;
short var_7 = (short)2205;
short var_8 = (short)-32359;
short var_9 = (short)16151;
int zero = 0;
short var_13 = (short)-2996;
short var_14 = (short)-10365;
short var_15 = (short)19657;
short var_16 = (short)-16490;
short var_17 = (short)-22797;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
