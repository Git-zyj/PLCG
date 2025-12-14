#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3716314964731826305LL;
unsigned long long int var_9 = 3704276783114231393ULL;
short var_10 = (short)28020;
int var_13 = 1432079018;
unsigned short var_15 = (unsigned short)7316;
int zero = 0;
int var_20 = -824411318;
short var_21 = (short)23181;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
