#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2529378562986299615LL;
unsigned char var_1 = (unsigned char)2;
long long int var_4 = -948423845752046118LL;
unsigned short var_5 = (unsigned short)24349;
unsigned long long int var_6 = 13216163374678372595ULL;
int var_8 = 524323770;
long long int var_9 = 9064934341648957803LL;
unsigned short var_10 = (unsigned short)28856;
int zero = 0;
unsigned short var_12 = (unsigned short)27741;
short var_13 = (short)-32676;
int var_14 = 1027173414;
long long int var_15 = -127213803534263948LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
