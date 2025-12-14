#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15252203637743115764ULL;
unsigned char var_3 = (unsigned char)14;
int var_5 = -617735925;
int var_6 = -1303120266;
int var_8 = 1687859227;
int var_9 = 1785468431;
signed char var_10 = (signed char)71;
unsigned long long int var_12 = 1717637970755927342ULL;
short var_14 = (short)-28271;
short var_15 = (short)21790;
int var_17 = 280932499;
int zero = 0;
int var_19 = -1091653997;
unsigned char var_20 = (unsigned char)60;
int var_21 = -73382518;
unsigned long long int var_22 = 17903075888844748026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
