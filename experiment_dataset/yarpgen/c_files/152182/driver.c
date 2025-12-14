#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1318760445;
unsigned short var_1 = (unsigned short)14988;
int var_5 = 1489006188;
unsigned long long int var_8 = 14861820539533053997ULL;
unsigned int var_10 = 1278077533U;
unsigned long long int var_11 = 55046684559144151ULL;
signed char var_12 = (signed char)-92;
int zero = 0;
unsigned char var_16 = (unsigned char)12;
int var_17 = 1594089124;
short var_18 = (short)19656;
int var_19 = 961323609;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
