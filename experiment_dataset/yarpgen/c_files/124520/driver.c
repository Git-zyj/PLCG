#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1135403343;
int var_2 = 1851571825;
unsigned short var_4 = (unsigned short)53721;
int var_5 = -1145907577;
unsigned char var_10 = (unsigned char)205;
unsigned long long int var_11 = 7965533978506072105ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)213;
long long int var_13 = 8494814887597750471LL;
unsigned long long int var_14 = 7754738670618838603ULL;
void init() {
}

void checksum() {
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
