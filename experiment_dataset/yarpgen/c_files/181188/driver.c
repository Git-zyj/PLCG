#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6951329599717610635LL;
unsigned char var_1 = (unsigned char)80;
unsigned long long int var_3 = 1681673191960645616ULL;
long long int var_4 = -8802940744156542700LL;
unsigned char var_5 = (unsigned char)222;
unsigned short var_7 = (unsigned short)65254;
unsigned long long int var_9 = 17473317750599574795ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)31441;
short var_12 = (short)25368;
int zero = 0;
unsigned long long int var_13 = 6772497342502047168ULL;
short var_14 = (short)-4928;
unsigned char var_15 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
