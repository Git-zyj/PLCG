#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned long long int var_1 = 14481482278756989753ULL;
unsigned char var_2 = (unsigned char)212;
long long int var_4 = -6165584165923927106LL;
_Bool var_6 = (_Bool)0;
int var_7 = -1936667097;
int var_9 = 772316031;
short var_10 = (short)-25388;
int zero = 0;
unsigned short var_11 = (unsigned short)955;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2448575855U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
