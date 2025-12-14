#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5648012450625083976LL;
long long int var_2 = -5667861389161630448LL;
unsigned char var_4 = (unsigned char)237;
unsigned long long int var_6 = 7493110338032589326ULL;
short var_7 = (short)10942;
int var_8 = 1900498022;
signed char var_9 = (signed char)111;
signed char var_10 = (signed char)-57;
unsigned int var_11 = 616697968U;
int zero = 0;
unsigned short var_15 = (unsigned short)62588;
unsigned char var_16 = (unsigned char)229;
short var_17 = (short)-16272;
void init() {
}

void checksum() {
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
