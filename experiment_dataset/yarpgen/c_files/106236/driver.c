#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned char var_1 = (unsigned char)146;
short var_3 = (short)19702;
unsigned long long int var_4 = 7860361670473714542ULL;
short var_5 = (short)-12729;
short var_6 = (short)32521;
short var_7 = (short)2016;
unsigned char var_8 = (unsigned char)109;
unsigned long long int var_9 = 5301241560279354003ULL;
short var_10 = (short)9519;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
unsigned long long int var_13 = 16708636114554687904ULL;
short var_14 = (short)-24852;
unsigned long long int var_15 = 6237347771057335373ULL;
unsigned long long int var_16 = 9808304085024776361ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
