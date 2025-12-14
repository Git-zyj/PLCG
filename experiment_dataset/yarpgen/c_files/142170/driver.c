#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1264519160012335987LL;
unsigned char var_1 = (unsigned char)247;
unsigned char var_2 = (unsigned char)4;
unsigned char var_4 = (unsigned char)178;
unsigned char var_5 = (unsigned char)111;
unsigned short var_6 = (unsigned short)61374;
signed char var_7 = (signed char)-12;
long long int var_10 = -3416739144019545053LL;
int zero = 0;
unsigned char var_11 = (unsigned char)113;
signed char var_12 = (signed char)45;
unsigned char var_13 = (unsigned char)221;
unsigned char var_14 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
