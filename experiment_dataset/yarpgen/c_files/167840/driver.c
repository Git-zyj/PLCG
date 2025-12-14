#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1664001964;
unsigned char var_5 = (unsigned char)86;
int var_9 = -223256562;
unsigned long long int var_10 = 4883993717700697129ULL;
short var_13 = (short)-6532;
unsigned long long int var_17 = 16361398019383774827ULL;
short var_19 = (short)-21794;
int zero = 0;
unsigned long long int var_20 = 14217398219034274362ULL;
unsigned long long int var_21 = 18304768783729747060ULL;
int var_22 = -1324267054;
void init() {
}

void checksum() {
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
