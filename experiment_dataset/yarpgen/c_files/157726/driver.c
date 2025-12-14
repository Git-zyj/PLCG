#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7986;
long long int var_3 = -6511806274605191673LL;
unsigned char var_4 = (unsigned char)224;
short var_7 = (short)-26825;
short var_9 = (short)-30848;
long long int var_10 = 4274280125027107662LL;
short var_13 = (short)26016;
unsigned int var_14 = 480086499U;
long long int var_18 = 8168891488983199839LL;
int zero = 0;
unsigned int var_19 = 2809601667U;
short var_20 = (short)32186;
short var_21 = (short)17154;
short var_22 = (short)-444;
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
