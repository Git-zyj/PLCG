#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned int var_2 = 726485497U;
short var_3 = (short)-20090;
short var_6 = (short)23181;
int var_10 = -2122836830;
signed char var_16 = (signed char)83;
int zero = 0;
unsigned int var_18 = 2058395266U;
int var_19 = 171952510;
unsigned int var_20 = 3937197473U;
short var_21 = (short)-20617;
void init() {
}

void checksum() {
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
