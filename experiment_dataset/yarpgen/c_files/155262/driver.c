#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17722542054200689215ULL;
signed char var_2 = (signed char)1;
unsigned int var_3 = 590014741U;
unsigned short var_5 = (unsigned short)50372;
unsigned long long int var_6 = 9699591689488765795ULL;
unsigned long long int var_7 = 12278825132741591780ULL;
unsigned long long int var_10 = 5006437638821992959ULL;
unsigned long long int var_11 = 13183438984779482295ULL;
unsigned long long int var_12 = 13021781792517897104ULL;
unsigned short var_14 = (unsigned short)51956;
signed char var_17 = (signed char)-10;
long long int var_18 = 908613081227184303LL;
int zero = 0;
unsigned short var_19 = (unsigned short)44041;
unsigned short var_20 = (unsigned short)40372;
unsigned char var_21 = (unsigned char)135;
short var_22 = (short)-30233;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
