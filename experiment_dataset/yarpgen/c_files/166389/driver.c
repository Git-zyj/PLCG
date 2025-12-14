#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7696297740392038180ULL;
signed char var_2 = (signed char)-110;
signed char var_4 = (signed char)-8;
signed char var_7 = (signed char)22;
signed char var_8 = (signed char)-32;
unsigned long long int var_9 = 17984547656442497441ULL;
int zero = 0;
int var_11 = -1627496326;
short var_12 = (short)20242;
unsigned short var_13 = (unsigned short)37955;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
