#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12433;
unsigned int var_4 = 1584355349U;
unsigned int var_5 = 7378333U;
unsigned int var_10 = 2212887540U;
short var_15 = (short)-18813;
unsigned int var_16 = 1795700886U;
int zero = 0;
short var_17 = (short)2444;
short var_18 = (short)-15429;
short var_19 = (short)14877;
short var_20 = (short)-4234;
unsigned int var_21 = 1974790997U;
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
