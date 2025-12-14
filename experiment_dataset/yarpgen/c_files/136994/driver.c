#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1784094121;
int var_3 = -104705800;
int var_5 = 809440931;
int var_11 = -1225217754;
short var_16 = (short)-8696;
int zero = 0;
unsigned short var_18 = (unsigned short)65438;
short var_19 = (short)-7634;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
