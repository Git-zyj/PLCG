#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11950;
signed char var_2 = (signed char)-106;
unsigned long long int var_5 = 1508152895203202325ULL;
unsigned short var_9 = (unsigned short)43021;
short var_11 = (short)-16223;
long long int var_12 = 1056484698347337210LL;
int zero = 0;
unsigned short var_19 = (unsigned short)37383;
signed char var_20 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
