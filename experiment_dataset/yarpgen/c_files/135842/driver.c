#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23650;
signed char var_4 = (signed char)119;
short var_6 = (short)-3756;
int var_7 = -1798681675;
unsigned long long int var_8 = 7221678762481590615ULL;
int zero = 0;
signed char var_10 = (signed char)-112;
unsigned short var_11 = (unsigned short)8008;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
