#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
signed char var_3 = (signed char)73;
unsigned long long int var_4 = 2454407698909123887ULL;
signed char var_6 = (signed char)64;
signed char var_7 = (signed char)-112;
int var_9 = -2003144144;
long long int var_10 = 1776446920898463090LL;
unsigned int var_11 = 2419509330U;
signed char var_13 = (signed char)116;
int zero = 0;
signed char var_14 = (signed char)-70;
short var_15 = (short)32559;
signed char var_16 = (signed char)-96;
signed char var_17 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
