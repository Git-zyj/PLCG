#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2441;
unsigned long long int var_1 = 16944458823101747850ULL;
unsigned short var_3 = (unsigned short)25911;
short var_7 = (short)20203;
short var_9 = (short)4252;
unsigned short var_10 = (unsigned short)20277;
unsigned long long int var_12 = 11327392564567484941ULL;
int zero = 0;
int var_13 = -377624703;
short var_14 = (short)-7294;
unsigned short var_15 = (unsigned short)28409;
unsigned short var_16 = (unsigned short)57805;
unsigned short var_17 = (unsigned short)9105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
