#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4036148316692632328LL;
long long int var_2 = 6845175594037745165LL;
unsigned long long int var_3 = 6833669530006016811ULL;
unsigned long long int var_4 = 16424682934231636252ULL;
unsigned short var_6 = (unsigned short)52225;
signed char var_7 = (signed char)-106;
unsigned int var_12 = 2192267926U;
unsigned char var_14 = (unsigned char)125;
long long int var_15 = 7913153913132133768LL;
int zero = 0;
int var_19 = 1095645033;
long long int var_20 = -165091360771750641LL;
int var_21 = 845934369;
unsigned short var_22 = (unsigned short)12186;
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
