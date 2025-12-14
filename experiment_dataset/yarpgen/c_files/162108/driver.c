#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 917274829;
short var_4 = (short)-2932;
short var_6 = (short)-26242;
int var_7 = -1131316729;
unsigned long long int var_8 = 4574859140585370561ULL;
unsigned long long int var_11 = 17655296575699585314ULL;
signed char var_12 = (signed char)126;
int zero = 0;
unsigned short var_13 = (unsigned short)33644;
short var_14 = (short)32140;
int var_15 = 632087207;
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
