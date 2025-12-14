#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned short var_1 = (unsigned short)59841;
unsigned long long int var_3 = 2232209980525551904ULL;
int var_8 = -1237065136;
short var_10 = (short)-27466;
unsigned short var_11 = (unsigned short)28450;
unsigned char var_14 = (unsigned char)41;
short var_15 = (short)23643;
unsigned long long int var_16 = 10552984635970707430ULL;
int zero = 0;
long long int var_17 = -1481340123023760367LL;
signed char var_18 = (signed char)-20;
long long int var_19 = -397324422062837376LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
