#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -887851150;
long long int var_2 = -7217828019453297828LL;
unsigned short var_3 = (unsigned short)55368;
short var_5 = (short)-15751;
unsigned short var_6 = (unsigned short)41892;
int var_7 = 1895393088;
short var_8 = (short)4849;
unsigned char var_9 = (unsigned char)217;
int var_10 = -2112684801;
signed char var_11 = (signed char)94;
unsigned char var_14 = (unsigned char)156;
int zero = 0;
int var_15 = -1245745855;
signed char var_16 = (signed char)27;
void init() {
}

void checksum() {
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
