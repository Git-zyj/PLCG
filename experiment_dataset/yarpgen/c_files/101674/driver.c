#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5963488456729484648LL;
unsigned int var_2 = 406651033U;
long long int var_5 = -4202432717111389871LL;
signed char var_8 = (signed char)49;
int zero = 0;
long long int var_10 = -4199026330394671613LL;
short var_11 = (short)2681;
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
