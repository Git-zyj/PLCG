#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1193545493;
unsigned long long int var_7 = 4974410209441823343ULL;
unsigned char var_8 = (unsigned char)206;
short var_9 = (short)2962;
unsigned long long int var_14 = 10475322481718533648ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
