#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11017;
int var_2 = -1180516018;
unsigned short var_3 = (unsigned short)13585;
int var_7 = -1181141871;
unsigned long long int var_9 = 18026493486050340682ULL;
short var_13 = (short)1901;
int var_15 = -1596061129;
int zero = 0;
short var_17 = (short)-21793;
unsigned short var_18 = (unsigned short)49121;
int var_19 = 74383383;
short var_20 = (short)-14961;
short var_21 = (short)18890;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
