#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
long long int var_2 = 7069184686433701665LL;
int var_5 = -1438085723;
short var_9 = (short)-32595;
unsigned char var_10 = (unsigned char)174;
short var_11 = (short)32243;
short var_12 = (short)-31813;
int zero = 0;
int var_13 = 692324528;
unsigned short var_14 = (unsigned short)51749;
int var_15 = -50840789;
void init() {
}

void checksum() {
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
