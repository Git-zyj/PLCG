#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1629774060;
long long int var_2 = 4648694292538198606LL;
short var_4 = (short)-29717;
unsigned char var_6 = (unsigned char)6;
unsigned int var_7 = 3863327727U;
long long int var_8 = -5731875983978167131LL;
unsigned char var_10 = (unsigned char)101;
unsigned long long int var_11 = 207255071775641756ULL;
int var_13 = 2013371704;
int zero = 0;
short var_14 = (short)-22323;
signed char var_15 = (signed char)12;
short var_16 = (short)-19275;
unsigned long long int var_17 = 9859208152938449936ULL;
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
