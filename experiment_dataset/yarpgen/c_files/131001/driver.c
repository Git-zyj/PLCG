#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 55635824U;
unsigned int var_2 = 2169064953U;
unsigned char var_3 = (unsigned char)79;
int var_5 = -1157625793;
unsigned short var_6 = (unsigned short)23385;
unsigned long long int var_10 = 9725545540266878260ULL;
short var_13 = (short)-18973;
int var_14 = -876605866;
int zero = 0;
int var_19 = 886767574;
unsigned long long int var_20 = 13343718380280334035ULL;
unsigned int var_21 = 3731621658U;
unsigned char var_22 = (unsigned char)190;
unsigned char var_23 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
