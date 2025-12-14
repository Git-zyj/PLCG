#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23654;
unsigned char var_2 = (unsigned char)56;
unsigned char var_6 = (unsigned char)45;
unsigned char var_12 = (unsigned char)90;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 6651663804300973598ULL;
signed char var_19 = (signed char)63;
void init() {
}

void checksum() {
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
