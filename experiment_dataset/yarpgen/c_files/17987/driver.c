#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned long long int var_3 = 18002834997604119137ULL;
unsigned short var_6 = (unsigned short)27063;
short var_12 = (short)-22666;
unsigned long long int var_15 = 17886582024598036104ULL;
int var_18 = -218669408;
int zero = 0;
int var_20 = 1796211953;
signed char var_21 = (signed char)23;
unsigned short var_22 = (unsigned short)4355;
unsigned char var_23 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
