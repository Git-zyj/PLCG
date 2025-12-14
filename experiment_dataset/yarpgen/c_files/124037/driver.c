#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2538351698543482953ULL;
int var_4 = -566699946;
unsigned long long int var_6 = 3374629836192972309ULL;
unsigned long long int var_8 = 3983859627039177572ULL;
short var_14 = (short)12947;
int zero = 0;
unsigned short var_18 = (unsigned short)35427;
int var_19 = 1964995585;
unsigned short var_20 = (unsigned short)33182;
unsigned short var_21 = (unsigned short)54378;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
