#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned long long int var_2 = 4528299378225158863ULL;
unsigned long long int var_6 = 8855791952341944790ULL;
int var_7 = -1091884717;
unsigned short var_8 = (unsigned short)54915;
int zero = 0;
unsigned long long int var_10 = 7147550606690657789ULL;
short var_11 = (short)-17559;
signed char var_12 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
