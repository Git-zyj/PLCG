#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -791697051093181888LL;
int var_2 = 1789871686;
short var_5 = (short)25539;
int var_8 = -1828557911;
int var_9 = 1210955594;
short var_10 = (short)23744;
int var_11 = 912180823;
int zero = 0;
int var_13 = -122670461;
int var_14 = -866576059;
void init() {
}

void checksum() {
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
