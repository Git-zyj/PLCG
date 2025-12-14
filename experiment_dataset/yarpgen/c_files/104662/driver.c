#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4022;
int var_4 = 371473738;
signed char var_7 = (signed char)2;
short var_9 = (short)-16534;
int zero = 0;
signed char var_11 = (signed char)-1;
int var_12 = 326911229;
short var_13 = (short)-4215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
