#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2642477315839880468LL;
long long int var_5 = -3630325520353170668LL;
int var_6 = 1734422976;
short var_8 = (short)-21031;
unsigned long long int var_13 = 6580989955060796435ULL;
unsigned long long int var_15 = 15994907832516980713ULL;
int zero = 0;
int var_16 = 2029116216;
long long int var_17 = -7879849921359168456LL;
short var_18 = (short)-1662;
int var_19 = -1781207513;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
