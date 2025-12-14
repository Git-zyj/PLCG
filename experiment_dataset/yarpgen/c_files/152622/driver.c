#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6628;
unsigned long long int var_4 = 8483278763575875315ULL;
unsigned long long int var_5 = 17574127331516605792ULL;
signed char var_6 = (signed char)-17;
unsigned long long int var_8 = 15737632112708572311ULL;
signed char var_9 = (signed char)83;
unsigned long long int var_10 = 17409519848320693464ULL;
int zero = 0;
short var_15 = (short)-16450;
int var_16 = -1531681409;
unsigned long long int var_17 = 11925112505424433198ULL;
short var_18 = (short)-30149;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
